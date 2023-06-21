#include <unistd.h>

/**
 *main - Prints _putchar as a message
 * 
 *  
 * Return: Always 0 (Success)
*/

int main(void)
{
	char message[] = "_putchar\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);
	return 0;
}