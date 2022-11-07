#include "main.h"

/**
 *_islower -checks if letter is lowercase
 *@c:ACII character
 *Return: 1 if c is lower case and 0 otherwise
 */

int _islower(int c)
{

if (c <= 'z' && c >= 'a')
{
return (1);
}

else
{
return (0);
}
_putchar('\n');
}
