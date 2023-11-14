#include "main.h"

/**
 * _printf - Function to print according to a format
 * @format: The First argument
 * 
 * Return: Count of how many charachter were printed
*/

int _printf(const char *format, ...)
{
    int count, spe;
    va_list args;
    type diftype[] = {{'c', _print_char}, {'s', _print_str}}
    count = 0;

    if (format == NULL)
    {
        return (-1);
    }
    va_start(args, format);
    while(*format != '\0')
    {
        if (*format != '%')
            count += -_print_char(format);
        else
        {
            format++;
            if(format == '%')
                count += _putchar('%');
            spe = 0;
            while (spe < 2)
            {
                if (format == diftype[spe].op)
                {
                    count += diftype[spe]->fun(args);
                    break;
                }
                spe++;
            }
        }
        format++;
    }
}