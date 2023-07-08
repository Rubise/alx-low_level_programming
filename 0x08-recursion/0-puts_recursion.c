#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion: prints string on new line
 * _purchar: writes single character to file descriptor 1
 * s: string
 * return: none
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
