#include "main.h"

/**
 * read_textfile - read a text file and prints it to the standard output
 * @filename : pointer to file name
 * @letters : number of letters it should read and print
 *
 * Return: number of bytes it could read and print, (0) on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t r, w;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	r = read(fd, buf, letters);
	w = write(1, buf, r);
	close(fd);
	free(buf);
	return (w);
}
