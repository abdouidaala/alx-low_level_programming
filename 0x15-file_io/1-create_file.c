#include "main.h"

/**
 * create_file - a function the creates a file
 * @filename: pointer to name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, length;

	if (!filename)
		return (-1);
	if (text_content)
	{
		length = 0;
		while (text_content[length])
			length++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, length);
	close(fd);
	return (1);
}
