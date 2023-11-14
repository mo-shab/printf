#include "main.h"
/**
 * _print_binary - function to print a binary number
 * @args: the argument passed to function
 * 
 * Return: Number of binary printed
*/
int _print_binary(va_list args)
{
unsigned int b = va_arg(args, unsigned int);
int bin;

if (b == 0)
{
_putchar('0');
return (1);
}
while (b > 0)
{
bin = b %2;
b = b / 2;
}
return (_print_int(bin));
}