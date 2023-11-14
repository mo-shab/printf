#include "main.h"

/**
* _print_str - function print string
* @args: argument passed to function
* Return: how many character printed
*/

int _print_str(va_list args)
{
	int str_len = 0, i = 0;
	char nul[] = "(NULL)";
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		while (nul[i] != '\0')
		{	_putchar(nul[i]);
			i++;
		}
		return (6);
	}
	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len++;
	}

	return (str_len);
}
