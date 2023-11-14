#include "main.h"

/**
 * _printf - Function to print according to a format
 * @format: The First argument
 * 
 * Return: Count of how many charachter were printed
*/

int _printf(const char *format, ...)
{
    int count, specifierIndex;
    va_list args;
    type diftype[] = {{'c', _print_char}, {'s', _print_str}};
    count = 0;

    if (format == NULL)
    {
        return (-1);
    }

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            count += _putchar(*format);
        }
        else
        {
            format++;
            if (*format == '%')
            {
                count += _putchar('%');
            }
            else
            {
                specifierIndex = 0;
                while (specifierIndex < 2)
                {
                    if (*format == diftype[specifierIndex].op)
                    {
                        count += diftype[specifierIndex].fun(args);
                        break;
                    }
                    specifierIndex++;
                }
                if (specifierIndex == 2)
                {
                    va_end(args);
                    return (-1);
                }
            }
        }
        format++;
    }

    va_end(args);
    return (count);
}