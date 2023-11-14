#include "main.h"
/**
 * _print_int - function to print an integer
 * @args: the argument
 * 
 * Return: Number of charachter printed
*/

int _print_int(va_list args)
{
int n = va_arg(args, int);
int len = 0;
int divisor = 1;
int temp = n;

if (n < 0)
{
len++;
_putchar('-');
n = -n;
}
temp = n;
while (temp > 9)
{
divisor *= 10;
temp /= 10;
}
while (divisor > 0)
{
_putchar((n / divisor) + '0');
len++;
n %= divisor;
divisor /= 10;
}

return (len);
}
