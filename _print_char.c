#include "main.h"
/**
* _print_char - print a characher
* @args: list of args passed to the function
* Return: number of char printed
*/

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
