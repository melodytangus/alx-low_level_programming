#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - execute funtion of a given array
 *@array: array to be printed
 *@size: size of array
 *@action: function arguement
 *Return: Void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
