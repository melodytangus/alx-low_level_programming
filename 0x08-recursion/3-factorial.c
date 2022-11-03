#include "main.h"

/**
 *factorial - returns factorial of an input
 *@n: input
 *Return: -1 if lower than 0, 1 if 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (factorial(n - 1) * n);
}
}
