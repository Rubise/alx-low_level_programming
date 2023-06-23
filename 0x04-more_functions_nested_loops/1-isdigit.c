#include "main.h"

/**
 * Check if  digit 0- 9
 * Return: 1 if number (0 to 9), 0 if not
 */

int _isdigit(int c)
{
	if(c >= '0'  && c <= '9' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
