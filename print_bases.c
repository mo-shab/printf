#include "main.h"

/**
 * _print_hex - _prints a number in hexadecimal base,
 * in lowercase
 * @args: va_list args from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char _printed
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

/**
 * _print_hex_big - _prints a number in hexadecimal base,
 * in uppercase
 * @args: va_list args from __printf
 * @f: pointer to the struct that determines
 * if a flag is passed to __printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char _printed
 */
int _print_hex_big(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

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
