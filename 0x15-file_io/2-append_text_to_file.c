#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: if the file alreafy exists, truncate it if filename is NULL
 * return -1 if text_content is NULL create an ampty file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return(-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[i] != '\0')
	{
		return (1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
