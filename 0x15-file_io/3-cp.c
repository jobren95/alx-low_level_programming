#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fildes);

/**
 * create_ buffer - declare 1024 bytes for a buffer
 * @file :The file buffer name is storing chars for
 * Return: A pointer to allocated new buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Descriptors file closes
 * @fildes: The descriptors file to be closed
 */
void close_file(int fildes)
{
	int c;

	c = close(fildes);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fildes %d\n", fildes);
		exit(100);
	}
}

/**
 * main - copy the file contents into another file
 * @argc: the counts of arguments supplied
 * @argv: a string of pointers to the arguments
 * Return: Success if 0
 * Description: if number of argument is incorrect - exit with code 97
 * if file_from does not exist or cannot be read - exit with code 98
 * if file_to cannot be created or written to - exit with code 99
 * if file_to or file_from cannot be closed  -exit with code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[1]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
