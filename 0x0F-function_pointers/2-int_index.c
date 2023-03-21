#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - execute funtion of a given array
 *@array: array to be printed
 *@size: size of array
 *@cmp: function arguement
 *Return: Void
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
