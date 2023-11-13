#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: caracthere sting
 *
 * Return: number of char printed
 * -1 if format == NULL
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_count++;
		}
		else
		{
			format++;
		if (*format == '\0')
			break;

		if (*format == '%')
		{
			write(1, "%%", 1);
			char_count++;
		}
		else if (*format == 'c')
		{
			char_count += _print_char(args);
		}
		else if (*format == 's')
		{
			char_count += _print_str(args);
		}
		}
		format++;
	}
	va_end(args);

	return (char_count);
}
