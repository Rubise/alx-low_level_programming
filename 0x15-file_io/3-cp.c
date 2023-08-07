#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

}

/**
 * main - check the code for 
 * @argc: number of arguments.
 * @argv: vector for arguments .
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t number_char, n;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	number_char = 1024;
	while (number_char == 1024)
	{
		number_char = read(file_from, buffer, 1024);
		if (number_char == -1)
		{
			error_file(-1, 0, argv);
		}

		n = write(file_to, buffer, number_char);
		if (n == -1)
		{
			error_file(0, -1, argv);
		}
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	return (0);
}
