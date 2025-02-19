/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of head & tail command?
* Sample Input :./myhead main.h myhead.c

* Sample output :
* ==> main.h <==
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>
#include<errno.h>

==> myhead.c <==

* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-01-2025
* Program: Write a system programming your own version of head & tail command?
* Sample Input :
* Sample output :
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int isspace(int c) {
    // Check if the character is one of the known whitespace characters
    return (c == ' '  ||  // Space
            c == '\t' ||  // Horizontal tab
            c == '\n' ||  // Newline
            c == '\v' ||  // Vertical tab
            c == '\f' ||  // Form feed
            c == '\r');   // Carriage return
}

int main(int argc, char *argv[]) {
    int fd, i, c = 0, w = 0, cc = 0;
    char ch;
    int in_word = 0; // Flag to track if we're inside a word

    if (argc < 2) {
        printf("%s: missing file operands\nTry '%s --help' for more information.\n", argv[0], argv[0]);
        exit(EXIT_FAILURE);
    }

    for (i = 1; i < argc; i++) { // Loop through each file
        fd = open(argv[i], O_RDONLY);
        if (fd < 0) {
            perror("Open fail");
            printf("Error no: %d\n", errno);
            continue; // Skip to the next file instead of exiting
        }

        if (argc >= 3) {
            printf("==> %s <==\n", argv[i]);
        }

        // Reset counters for each file
        c = 0;
        w = 0;
        cc = 0;
        in_word = 0;

        while (read(fd, &ch, 1) == 1) {
            cc++; // Count characters

            if (ch == '\n') {
                c++; // Count lines
            }

            if (isspace(ch)) { // Check for whitespace (space, tab, newline)
                if (in_word) {
                    w++; // End of a word
                    in_word = 0;
                }
            } else {
                if (!in_word) {
                    in_word = 1; // Start of a new word
                }
            }
        }

        // If the file ends with a word (no trailing whitespace), count it
        if (in_word) {
            w++;
        }

        printf(" %d %d %d %s\n", c, w, cc, argv[i]);

        close(fd); // Close the file descriptor
    }

    exit(EXIT_SUCCESS);
}
