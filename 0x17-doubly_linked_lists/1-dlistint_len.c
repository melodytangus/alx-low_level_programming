#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - finds of elements in a linked list.
* @h: Pointer to the first element of the linked list.
* Return: the number of elements in a linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
