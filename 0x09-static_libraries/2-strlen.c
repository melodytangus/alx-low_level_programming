#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: Pointer to int s location
 *Return: Null/Void
 */

int _strlen(char *s)
{
int i = 0;
while (*s)
{
i++;
s++;
}
return (i);
}
