#include "main.h"

/**
 * main - function that call another function to copy a file
 * @argc: int count of arguments
 * @argv; char double pointer
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int fd, fw;
	char buf[1024];
	ssize_t read_num, write_num, close_num, close_new;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		       	exit(97);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			       	argv[1]);
		exit(98);
	}
	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);

	while ((read_num = read(fd, buf, 1024)) > 0)
	{
		write_num = write(fw, buf, read_num);
		if (write_num != read_num)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				       	argv[2]);
			exit(99);
		}
	}
	if (read_num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", 
				argv[1]);
		exit(98);
	}
	close_new = close(fw);
	close_num = close(fd);

	if (close_num == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd),
		       	exit(100);
	if (close_new == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw),
		       	exit(100);
	return (0);
}
