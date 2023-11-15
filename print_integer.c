#include "main.h"

/**
 * _print_int - Prints an integer
 * @l: va_list of args from _printf
 * @f: Pointer to the struct flags determining if a flag is passed to _printf
 * Return: Number of characters printed
 */
int _print_int(va_list args, flags_t *f)
{
	int n = va_arg(args, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	_print_number(n);
	return (res);
}

/**
 * _print_unsigned - Prints an unsigned integer
 * @l: va_list of args from _printf
 * @f: Pointer to the struct flags determining if a flag is passed to _printf
 * Return: Number of characters printed
 */
int _print_unsigned(va_list args, flags_t *f)
{
	unsigned int u = va_arg(args, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * _print_number - helper function that loops through
 * an integer and _prints all its digits
 * @n: integer to be _printed
 */
void _print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		_print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for __printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
