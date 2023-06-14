#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: reading the text file
 * @letters: counts of letters to be read
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fildes;
	ssize_t w;
	ssize_t t;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fildes, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);


	free(buffer);
	close(fildes);
	return (w);
}
