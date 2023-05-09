#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[1024];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	bytes = read(fd, buffer, letters);
	bytes = write(fd, buffer, bytes);
	if (fd == -1)
		return (0);
	close(fd);
	return (bytes);
}
