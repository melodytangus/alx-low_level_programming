#include <stdio.h>

/**
 *main -Print a-z
 *
 *Return: Value 0 (true)
 */

int main(void)

{

char ch = 'a';

while (ch <= 'z')
{

putchar(ch);
ch++;

}

putchar('\n');
return (0);

}
