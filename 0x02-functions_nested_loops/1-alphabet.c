#include "main.h"

/**
 *print_alphabet - Begin Here
 *
 *Print a-z
 */

void print_alphabet(void)

{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

/**
 *main-check code
 *
 *Return: 0(Success)
 */

int main(void)
{
print_alphabet();
return (0);
}
