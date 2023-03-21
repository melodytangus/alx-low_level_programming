#include "lists.h"
/**
* get_dnodeint_at_index - gets the node at a given index.
* @head: The pointer to the initial node to the linked list.
* @index: The index to be found.
*
* Return: The indexed node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node;

for (node = 0 ; node < index ; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
