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
#include<semaphore.h>

int morse(char *msg);

int main(int argc, char *argv[])
{
        int i = 0;              // Loop index
        FILE *dict_fp = 0;      // Dictionary file pointer
        size_t size = 0;        // String sizes
        pid_t child;            // PID for forking
        char words[3][256];     // Buffer for strings read from the dictionary
        int ret = 0;            // Return value

        // Open the dictionary
        dict_fp = fopen("american-english", "r");
        if (dict_fp == NULL) {
                printf("Error: failed to open 'american-english'");
                return 1;
        }

        // Continually read lines from the dictionary
        while (fgets(words[i], 256, dict_fp) != NULL) {

                // Record size and chop off newline if present
                size = strlen(words[i]);        
                if (words[i][(int)size - 1] == '\n')
                        words[i][(int)size - 1] = '\0';

                // Once three strings are obtained, fork two strings to child processes and
                // run the third on the parent
                if (i == 2) {

                        // Child 1
                        child = fork();
                        if (child == 0) {
                                return morse(words[0]);
                        }

                        // Child 2
                        child = fork();
                        if (child == 0) {
                                return morse(words[1]);
                        }

                        // Parent runs the last word
                        ret = morse(words[2]);
                        if (ret)
                                return ret;

                        // Bring index back down to 0
                        i = 0;
                }
                else {
                        i++;
                }
        }

        return 0;
}

int morse(char *msg) 
{
        size_t msg_size = strlen(msg);

        int morse_fd = 0;       // Morse file descriptor
         
        morse_fd = open("/dev/morse", O_WRONLY);
        if (morse_fd <= 0) {
                printf("Error: failed to open bmorse for writing\n");
                return 1;
        }
      
        if (msg_size != write(morse_fd, msg, msg_size)) {
                printf("Error: failed to write to bmorse\n");
                return 2;
        }

        printf("Wrote %s to bmorse\n", msg);

        close(morse_fd);
        return 0;
}
