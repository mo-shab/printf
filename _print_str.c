#include "main.h"

/**
* _print_str - function print string
* @args: argument passed to function
* Return: how many character printed
*/

int _print_str(va_list args)
{
	int str_len = 0, i = 0;
	char *str = va_arg(args, char*);

	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}
	write(1, str, str_len);

	return (str_len);
}
