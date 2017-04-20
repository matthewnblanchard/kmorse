/* Matthew Blanchard
 * ECE 331
 * Title: regress.c
 * Description: bmorse test program. This program aims to test the effectiveness 
 *      of the bmorse module in tandem with the helper script pl-regress. Regress.c
 *      accepts multiple string arguments and forks to send each string to the module
 *      at the same time, in order to test locking. pl-regress sends words to the 
 *      regress program in sets to exhaustively test locking.
 */

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
        int i = 0;       // Loop index
        int fd = 0;      // File descriptor
        size_t size = 0; // String size
        pid_t child;     // PID for forking

        // Create a child process for each argument
        for (i = 1; i < argc; i++) {
                child = fork();           // Create child
                if (child == 0) {         // If this is the child, exit the loop
                        break;  
                } else if (child < 0) {   // If the child was not created, note it and keep going
                        printf("Warning: failed to create child process for %s argument!\n", argv[i]);
                }      
        }

        // Child processess write their argument to bmorse
        if (child == 0) {
                size = strlen(argv[i]); // String size
       
                fd = open("/dev/morse", O_WRONLY);
                if (fd <= 0) {
                        printf("Error: failed to open bmorse for writing\n");
                        return 2;
                }
       
                if (size != write(fd, argv[i], size)) {
                        printf("Error: failed to write to bmorse\n");
                        return 3;
                }

                close(fd);
                return 0;
        }
        return 0;
}
