#include "main.h"

/**
 * _print_address - Prints the address of input in hexadecimal format
 * @l: va_list args from _printf
 * @f: Pointer to the struct flags that determines if a flag is passed to _printf
 * Return: Number of characters printed
 */
int _print_address(va_list args, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(args, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
