#include "main.h"
/**
* _print_int - function to print int
* @args: the arg passed
* Return: 1
*/

int _print_int(va_list args)
{
int i = va_arg(args, int);
char buffer[12];
int len = sprintf(buffer, "%d", i);

write(1, buffer, len);

return (len);
}
