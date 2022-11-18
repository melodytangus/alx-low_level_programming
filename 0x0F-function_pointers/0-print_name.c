#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - Prints a name
 *@name: array of name
 *@f: function arguement
 *Return: Void
 **/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
