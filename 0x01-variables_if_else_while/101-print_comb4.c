#include <stdio.h>

/**
 *main - Begin Here
 *Possible 3 combinations
 *Return: Value 0 (true)
 */
int main(void)

{

int num1, num2, num3;

for (num1 = 0 + '0' ; num1 < 10 + '0'; num1++)

{

for (num2 = num1 + 1; num2 < 10 + '0'; num2++)

{

for (num3 = num2 + 1; num3 < 10 + '0'; num3++)

{

putchar(num1);
putchar(num2);
putchar(num3);

if (num1 >= (7 + '0'))

{
;

}
else
{
putchar(',');
putchar(' ');
}

}

}

}

putchar('\n');
return (0);

}
