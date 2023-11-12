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

	while (format != '\0')
	{
		if (*format != '%')
		{
			write(1, fromat, 1);
			char_count++;
		}
		else
		{
			format++;
		}
		if (*format == '\0')
			break;

		if (*format == '%')
		{
			write(1, format, 1);
			char_count++;
		}
		else if (*format == 'c')
		{
			char cha = var_arg(args, int);

			char_count++;
		}
		else if (*format == 's')
		{
			char *str = var_arg(args, char*);

			write(1, str, strlen(str));
			char_count += strlen(str);
		}
		format++;
	}
	var_end(arg);

	return (cha_count);
}
