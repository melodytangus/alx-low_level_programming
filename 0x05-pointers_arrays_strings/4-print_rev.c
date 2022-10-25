#include "main.h"

/**
 * print_rev - prints out a string in reverse
 * @s: Pointer to string location
 *Return: Null/Void
 */

void print_rev(char *s)
{
int i;
while (*s)
{
i++;
s++;
}
s--;
for (; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
