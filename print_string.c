#include "main.h"

/**
 *print_string - initializes a variable type
 *@string: parameter of name
 * Return: nothing.
 */
int print_string(char *string)
{
int count;

for (int i = 0; string[i] != '\0'; i++)
{
count += _putchar(string[i]);
}
return (count);
}
