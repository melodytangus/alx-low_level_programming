#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes a node at a given index.
*
* @head: A pointer to the linked list.
* @index: The position to be deleted.
* Return: The deleted index.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
