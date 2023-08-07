#include "main.h"

/**
 * append_text_to_file - appends at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exist. -1 if the fails does not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int r;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		n = 0;
		while (text_content[n])
		{
			n++;
		}

		r = write(f, text_content, n);

		if (r == -1)
		{
			return (-1);
		}
	}

	close(f);

	return (1);
}
