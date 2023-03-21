#include "3-calc.h"
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	result = get_op_func(argv[2], atoi(argv[1]), atoi(argv[3]))
	printf("%d\n", result);
	return (0);
}
