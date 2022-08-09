#include <stdio.h>
#include<stdarg.h>
#include <unistd.h>
#include "main.h"

int _printf (const char *format, ...)
{
int count;
int i;
va_list data;
va_start(data, format);

for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i] == '%' && format[i + 1] != ' ')
{
switch (format[i + 1])
{
case 'c':
count += _putchar(va_arg(data, int));
break;
case 's':
count += print_string(va_arg(data, char *));
break;
case '%':
count += _putchar('%');
break;

default:
break;
}
i += 2;
}
}
return (count);
}
