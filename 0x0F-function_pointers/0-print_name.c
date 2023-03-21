#include "function_pointers.h"
#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> bc38b60917d5f77d06b094a981340048461ebcf0
/**
 *print_name - Prints a name
 *@name: array of name
 *@f: function arguement
 *Return: Void
<<<<<<< HEAD
 */
=======
 **/
>>>>>>> bc38b60917d5f77d06b094a981340048461ebcf0

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
