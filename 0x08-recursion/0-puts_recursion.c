#include #main.h"
#include <stdio.h>

/*_puts_recursion: prints string followed by new line
*s: var to be printed
*return: none
*/

void _puts_recursion (char *s)
{
	if (*s == '\0')
	printf("%c\n", *s);
	_puts_recusion(s+1);
}
