#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - func to read text file print to STDOUT.
 * @filename: variable to read text file
 * @letters: letters to be read
 * Return:  actual number of bytes read and printed
 *        0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buffr;
        ssize_t fd;
        ssize_t a;
        ssize_t c;
        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buffr = malloc(sizeof(char) * letters);
        c = read(fd, buffr, letters);
        a = write(STDOUT_FILENO, buffr, c);
        free(buffr);
        close(fd);
        return (a);
}
