#include "main.h"

/**
 * _print_string - Loops through a string and prints every character
 * @args: va_list args from _printf
 * @f: Pointer to the struct flags that determines if a
 * flag is passed to _printf
 * Return: Number of characters printed
 */
int _print_string(va_list args, flags_t *f)
{
	char *s = va_arg(args, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * _print_char - Prints a character
 * @args: va_list args from _printf
 * @f: Pointer to the struct flags that determines if a
 * flag is passed to _printf
 * Return: Number of characters printed
 */
int _print_char(va_list args, flags_t *f)
{
	(void)f;
	_putchar(va_arg(args, int));
	return (1);
}
