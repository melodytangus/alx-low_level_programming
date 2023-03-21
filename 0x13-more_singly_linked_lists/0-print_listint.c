#include <stdio.h>
#include "lists.h"

/**
 *print_listint - Prints alll elements of Linked List
 *
 *@h: pointer to struct listint_t
 *
 * Return: size_t
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
