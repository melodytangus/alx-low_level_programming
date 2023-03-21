#include "lists.h"
#include <stdlib.h>
/**
* free_dlistint - frees the linked list.
* @head: pointer to the linked list.
*
*/

void free_dlistint(dlistint_t *head)
{

dlistint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
