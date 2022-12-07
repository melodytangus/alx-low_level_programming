#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int pop;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = *head;
	if (current)
	{
		pop = current->n;
		*head = current->next;
	}

	return (pop);
}
