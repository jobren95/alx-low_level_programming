#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Buffer allocates bytes 1024.
 * @file: The buffer file stores char for
 *
 * Return: Pointer to newly allocated buffer
 */
char *creates_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Descriptors file closed
 * @fd: Descriptor file to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n",);
		exit(100);
	}
}

/**
 * main - Moves the contents of a file to another.
 * @@argc: The counts of arguments supplied to the program.
 * @argv: The strings of pointer to the arguments.
 *
 * Return: 0 on success.
 * Description: if the number of argument is not correct
 * - exit code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
					free(buffer);
					exit(98);
					}
					w = write(to, buffer, r);
					if (to == -1 || w == -1)
					{
					dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
					free(buffer);
					exit(99);
					}
					r = read(from, buffer, 1024);
					to = open(argv[2], O_WRONLY | O_APPEND);
					} while (r > 0);

					free(buffer);
					close_file(from);
					close_file(to);

					return (0);
					}
