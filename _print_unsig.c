#include "main.h"
/**
* _print_unsig - the unsign argument is converted to binary
* @args: the arg passed
* Return: 1
*/

int _print_unsig(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    char buffer[33];
    int len = sprintf(buffer, "%b", i);

    write(1, buffer, len);

    return (len);
}
