#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to array location
 * @c: Constant byte to be searched
 * Return: Pointer to memory s
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i])
{
if (s[i] == c)

return (s + i);

i++;

}

if (s[i] == c)

return (s + i);

return (NULL);

}
