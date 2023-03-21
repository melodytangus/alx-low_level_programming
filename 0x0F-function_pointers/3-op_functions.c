#include "3-calc.h"
/**
 * op_add - perform addition
 *
 * @a: The first operand
 * @a: The second operand
 * 
 * Retur: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perform subtraction
 *
 * @a: The first operand
 * @a: The second operand
 *
 * Retrun: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - perform multiplication
 *
 * @a: The first operand
 * @a: The second operand
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - perform division
 *
 * @a: The first operand
 * @a: The second operand
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_add - perform modulus operation
 *
 * @a: The first operand
 * @a: The second operand
 *
 * Retrun: remainder value
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
