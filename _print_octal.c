#include "main.h"
/**
 * _print_octal - _prints a number in base 8
 * @args: va_list args from __printf
 * @f: pointer to the struct that determines
 * if a flag is passed to __printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char _printed
 */
int _print_octal(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
