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
	char *buffer = malloc(sizeof(char) * 1024);
	ssize_t r;

	if (argc != 3)
		exit_97();
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if ((r = read(file_from, buffer, 1024)) != EOF)
		write(file_to, buffer, r);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
