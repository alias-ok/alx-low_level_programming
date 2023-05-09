#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @file: The file buffer storing chars for.
 *
 * Return: A pointer to newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int o;

	o = close(fd);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: always 0 for success.
 *
 * Description: If incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int ac, char *av[])
{
	int frm, t, a, u;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(av[2]);
	frm = open(av[1], O_RDONLY);
	a = read(frm, buff, 1024);
	t = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		u = write(t, buff, a);
		if (t == -1 || u == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}

		a = read(frm, buff, 1024);
		t = open(av[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buff);
	close_file(frm);
	close_file(t);

	return (0);
}
