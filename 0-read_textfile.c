#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n, m;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
	{
		return (0);
	}

	n = read(file, buffer, letters);
	m = write(STDOUT_FILENO, buffer, n);

	close(file);

	free(buffer);

	return (m);
}
