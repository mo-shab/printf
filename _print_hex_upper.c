#include "main.h"
/**
 * _print_hex_upper - _prints a number in hexadecimal base in uppercase
 * @args: va_list args from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char _printed
 */
int _print_hex_upper(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);

	return (count);
}
