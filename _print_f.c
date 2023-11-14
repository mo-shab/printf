#include "main.h"

/**
 * _printf - Function to print according to a format
 * @format: The First argument
 *
 * Return: Count of how many charachter were printed
*/

int _printf(const char *format, ...)
{
	int count = 0, specifierIndex;
	va_list args;
	type diftype[] = {{'c', _print_char}, {'s', _print_str}, {'d', _print_int},
{'i', _print_i}, {'b', _print_binary}, {'u', _print_unsig}, {'o', _print_octal},
{'x', _print_hexa}, {'X', _print_hexa_upper}};

if (format == NULL)
	return (-1);
va_start(args, format);
while (*format != '\0')
{
	if (*format != '%')
		count += _putchar(*format);
else
{
format++;
			if (*format == '%')
				count += _putchar('%');
			else
			{
				specifierIndex = 0;
				while (specifierIndex < 9)
				{
					if (*format == diftype[specifierIndex].op)
					{
						count += diftype[specifierIndex].fun(args);
						break;
					}
					specifierIndex++;
				}
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
