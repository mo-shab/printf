#include "main.h"

/**
 * _puts - _prints a string to stdout
 * @str: pointer to the string to _print
 * Return: number of chars written
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
