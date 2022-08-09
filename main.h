#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_string(char *string);
int _putchar(char c);
int print_int(va_list i);
int print_dec(va_list d);

#endif /* MAIN_H*/
