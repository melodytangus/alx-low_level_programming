#include "lists.h"
/**
* sum_dlistint - adds all integer values of a linked list.
* @head: A pointer to the first element in the node.
* Return: sum.
*
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
