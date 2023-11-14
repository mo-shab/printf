#include "main.h"
/**
 * _print_i - function to print an integer with %i
 * @args: the argument
 *
 * Return: Number of charachter printed
*/

int _print_i(va_list args)
{
int i = va_arg(args, int);
char buffer[12];
int len = sprintf(buffer, "%d", i);

write(1, buffer, len);

return (len);
}
