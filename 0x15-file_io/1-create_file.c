#include "main.h"

/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd1;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd1 = open(filename, O_CREAT, 0600);
		close(fd1);
	}

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	write(1, text_content, sizeof(text_content));
	if (fd == -1)
		return (-1);
	close(fd);
	return (1);
}
