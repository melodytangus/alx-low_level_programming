#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts a node at a given index.
*
* @h: Pointer to the iniatial index location of the linked list.
*
* @idx: The index of insertion.
*
* @n: data at the new node.
*
* Return: returns the newly inserted node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *copy = *h;
	unsigned int node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*h = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
