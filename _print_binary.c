#include "main.h"
/**
 * _print_binary - _prints a number in base 2
 * @args: va_list args from __printf
 * @f: pointer to the struct that determines
 * if a flag is passed to __printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char _printed
 */
int _print_binary(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
