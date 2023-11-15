#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

/**
 * @struct flags - Holds flags to enable specific behaviors in __printf()
 * @plus: Flag for the '+' character
 * @space: Flag for the ' ' character
 * @hash: Flag for the '#' character
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * @struct _printHandler - Associates format specifiers with their
 * corresponding _printing functions for __printf()
 * @c: Format specifier
 * @f: Pointer to the correct _printing function
 */
typedef struct _printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int _print_int(va_list args, flags_t *f);
void _print_number(int n);
int _print_unsigned(va_list args, flags_t *f);
int count_digit(int i);
int _print_hex(va_list args, flags_t *f);
int _print_hex_upper(va_list args, flags_t *f);
int _print_binary(va_list args, flags_t *f);
int _print_octal(va_list args, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int _print_string(va_list args, flags_t *f);
int _print_char(va_list args, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int _print_rot13(va_list args, flags_t *f);
int _print_rev(va_list args, flags_t *f);
int _print_upperS(va_list args, flags_t *f);
int _print_address(va_list args, flags_t *f);
int _print_percent(va_list args, flags_t *f);

#endif
