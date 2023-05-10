#include "main.h"
#include <sys/stat.h>

#define ARGUMENTS_FAILS "Usage: cp file_from file_to\n"
#define CAN_NOT_READ "Error: Can't read from file %s\n"
#define CAN_NOT_WRITE "Error: Can't write to %s\n"
#define CAN_NOT_CLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buffer;
	ssize_t r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ARGUMENTS_FAILS);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, CAN_NOT_READ, argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, CAN_NOT_WRITE, argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	while ((r = read(file_from, buffer, 1024)) > 0)
		write(file_to, buffer, r);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, CAN_NOT_READ, argv[1]);
		exit(98);
	}
	free(buffer);
	close(file_from);
	close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, CAN_NOT_CLOSE, file_from);
	if (file_to)
		dprintf(STDERR_FILENO, CAN_NOT_CLOSE, file_from);
	return (0);
}
