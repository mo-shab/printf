#include "main.h"

/**
 * _print_hex - prints a number in hexadecimal base in lowercase
 * @args: va_list args from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int _print_hex(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);

	return (count);
}
