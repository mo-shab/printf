#include "main.h"
/**
 * _print_octal - print a octal
 *@args:unsigned integer input
 *
 * Return: How many chcarachter printed
 */
int _print_octal(va_list args)
{
unsigned int octal = va_arg(args, unsigned int);
int  i = 0, j, temp = 0;
int tab[100];

if (octal == 0)
{
_putchar('0');
return (1);
}
while (octal != 0)
{
tab[i] = octal % 8;
octal = octal / 8;
i++;
}
for (j = i - 1; j >= 0; j--)
_putchar(tab[j]);
return (i);
}
