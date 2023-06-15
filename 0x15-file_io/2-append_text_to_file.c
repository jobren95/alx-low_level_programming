#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer to file name
 * @text_content: Add string to the end of the file
 * Return: 1 on success and -1 on failure
 * if the file does not exist or if you
 * do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}
