#include "main.h"
/**
 * _print_hexa - print a hexa
 *@args:unsigned integer input
 *
 * Return: How many chcarachter printed
 */
int _print_hexa(va_list args)
{
unsigned int hexa = va_arg(args, unsigned int);
int  i = 0, j, temp = 0;
int tab[100];

if (hexa == 0)
{
_putchar('0');
return (1);
}
while (hexa != 0)
{
temp = hexa % 16;
if (temp < 10)
tab[i] = 48 + temp;
else
tab[i] = 87 + temp;
hexa = hexa / 16;
i++;
}
for (j = i - 1; j >= 0; j--)
_putchar(tab[j]);
return (i);
}
