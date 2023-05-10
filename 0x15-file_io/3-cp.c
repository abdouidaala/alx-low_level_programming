#include "main.h"

#define ARGUMENTS_FAILS "Usage: cp file_from file_to\n"
#define CAN_NOT_READ "Error: Can't read from file %s\n"
#define CAN_NOT_WRITE "Error: Can't write to %s\n"
#define CAN_NOT_CLOSE "Error: Can't close fd %d\n"

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
	char buffer[1024];
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
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, CAN_NOT_WRITE, argv[2]);
		exit(99);
	}
	while ((r = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, r) < 0)
		{
			dprintf(STDERR_FILENO, CAN_NOT_WRITE, argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, CAN_NOT_READ, argv[1]);
		exit(98);
	}
	close(file_from);
	close(file_to);
	return (0);
}
