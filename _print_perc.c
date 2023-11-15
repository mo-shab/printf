#include "main.h"
/**
 * _print_percent - Prints a percent symbol
 * @args: va_list args from _printf
 * @f: Pointer to the struct flags in which we turn the flags on
 * Return: Number of characters printed
 */
int _print_percent(va_list args, flags_t *f)
{
	(void)args;
	(void)f;
	return (_putchar('%'));
}
