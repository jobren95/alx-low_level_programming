#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Pointing to the name of file to create
 * @text_content: pointing to array to write to file
 *
 * Return: if function fails --1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);

		if (text_content != NULL)
		{
			for (len = 0; text_content[len];)
				len++;
		}
		close(fd);
	}
	return (1);
}
