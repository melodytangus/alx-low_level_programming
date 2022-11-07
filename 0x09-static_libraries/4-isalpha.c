#include "main.h"
/**
 *_isalpha - begin here
 *@c: ASCII Character
 *return 1 if c is a letter, otherwise 0
 *Return: 0 (Success)
 */
int _isalpha(int c)
{
if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
