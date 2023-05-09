#include "main.h"

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 1024);
		exit(97);
	}
	return (0);
}
