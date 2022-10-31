#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSTIX standard output
 * @filename: name  of the data
 * @letters: number of  letters
 *
 * Return: the actual number of ;etters it could read and print. if filename is
 * NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	bytes = read(fd, buf, letters);
	buf[bytes + 1] = EOF;

	write(STDOUT_FILENO, buf, bytes);

	close(fd);
	free(buf);
	return (bytes);
}
