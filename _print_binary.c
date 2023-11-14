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
int j, count = 0;
int tab[100];

if (b == 0)
{
_putchar('0');
return (1);
}
while (b > 0)
{
tab[count] = b % 2;
b = b / 2;
count++;
}
for (j = count - 1; j >= 0; j--)
_putchar(tab[j] + '0');
return (count);
}
