#include "main.h"

/**
 * _puts - prints a string
 * @str: Pointer to string location
 *Return: Null/Void
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
