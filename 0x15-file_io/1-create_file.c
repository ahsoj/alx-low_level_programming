#include "main.h"                                                                                                             
                                                                                                                              
/**                             
 * create_file - function thar create a file.                                   
 * @filename: pointer                                                      
 * @text_content: pionter                                                  
 * Return: if the file already extists, turncate it, if filename is NULL
 * return -1 if text_content is NULL create an empty file                       
 */                                                                                                                           
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		if (write(fd, text_content, i) == -1)
		{
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
