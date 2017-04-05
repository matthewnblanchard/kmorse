/* Matthew Blanchard
 * ECE 331
 * Title: test.c
 * Description: kmorse test program. This program aims to
 *      test the capabilities of the kmorse kernel driver.
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
        int fd = 0;      // File descriptor
        size_t size = 0; // String size

        printf("Checking argument count ... \n");
        if (argc != 2) {
                printf("Error: expecting one argument ... \n");
                return 1;
        }

        size = strlen(argv[1]) + 1; // String size, plus one for null terminator
       
        printf("Opening bmorse ... \n"); 
        fd = open("/dev/morse", O_WRONLY);
        if (fd <= 0) {
                printf("Error: failed to open bmorse for writing\n");
                return 2;
        }
       
        printf("Writing %s to bmorse ... \n", argv[1]); 
        if (size != write(fd, argv[1], size)) {
                printf("Error: failed to write to bmorse\n");
                return 3;
        }

        printf("Closing bmorse ... \n");
        close(fd);
        printf("Exiting ... \n");
        return 0;
}
