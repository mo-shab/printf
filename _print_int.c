#include "main.h"

/**
* _print_int - function to print int
* @args: the arg passed
* Return: 1
*/

int _print_int(va_list args)
{

	write(1, args, 1);

	return (1);
}
