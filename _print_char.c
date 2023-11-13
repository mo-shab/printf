#include "main.h"
/**
* _print_char - print a characher
* @args: list of args passed to the function
* @format: the caracter to print
* Return: number of char printed
*/

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}
