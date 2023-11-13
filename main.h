#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int _print_prc(void);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_int(va_list args);
#endif
