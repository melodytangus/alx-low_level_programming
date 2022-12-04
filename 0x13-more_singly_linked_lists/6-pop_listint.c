#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
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
