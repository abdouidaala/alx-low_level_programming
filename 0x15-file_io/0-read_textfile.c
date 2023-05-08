#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDRW | O_CREAT);
	char buffer[letters];

	while (read(fd, buffer, letters) != NULL)
		write(fd, buffer, letters);
}
