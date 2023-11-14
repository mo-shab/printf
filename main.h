#ifndef MAIN_H
#define MAIN_h

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct types_args - Struct to choose an operation
 * 
 * @op: The Operator passed to the printf function
 * @fun: The function associated to the operator passed
*/
typedef struct type_args
{
    char op;
    int (*fun)(va_list args);
} type;


int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_str(va_list args);

#endif