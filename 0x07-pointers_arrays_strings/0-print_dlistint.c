#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints elements of a linked list
* @h: A pointer to first element of the node.
* Return: number of nodes in the linked list.
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
