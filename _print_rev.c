#include "main.h"
/**
 * _print_rev - Prints a string in reverse
 * @args: Argument from _printf
 * @f: Pointer to the struct flags that determines if a
 * flag is passed to _printf
 * Return: Length of the printed string
 */
int _print_rev(va_list args, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
