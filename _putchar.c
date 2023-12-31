#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
