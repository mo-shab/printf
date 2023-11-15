#include "main.h"

/**
 * _print_bigS - Non _printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * _printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @l: va_list args from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Return: number of char _printed
 */
int _print_bigS(va_list args, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * _print_rev - _prints a string in reverse
 * @l: argument from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Return: length of the _printed string
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

/**
 * _print_rot13 - _prints a string using rot13
 * @l: list of args from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Return: length of the _printed string
 */
int _print_rot13(va_list args, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(args, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * _print_percent - Prints a percent symbol
 * @l: va_list args from _printf
 * @f: Pointer to the struct flags in which we turn the flags on
 * Return: Number of characters printed
 */
int _print_percent(va_list args, flags_t *f)
{
	(void)args;
	(void)f;
	return (_putchar('%'));
}
