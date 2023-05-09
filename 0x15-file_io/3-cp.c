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

	if (argc != 3)
		exit_97();
	return (0);
}
