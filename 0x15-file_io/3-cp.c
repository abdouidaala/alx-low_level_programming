#include "main.h"

void *exit_97(void)
{
	char *msg = "Usage: cp file_from file_to\n";
	int len = 0;

	if (msg)
	{
		while (msg[len])
			len++;
	}
	write(STDERR_FILENO, msg, len);
	exit(97);
}
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buffer;
	ssize_t r;

	if (argc != 3)
		exit_97();
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = malloc(sizeof(char) * 1024);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(file_from, buffer, 1024);
	write(file_to, buffer, r);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
