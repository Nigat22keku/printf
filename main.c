#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
int n = _printf("Hello %c %s %%", 'B', "Nigat");
printf("\nn = %d\n", n);
return (0);
}
