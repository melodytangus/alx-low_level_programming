#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint_end - adds a new node at the end of the kinked list.
* @head: Pointer to the node to be added.
* @n: The data value in the linked list.
*
* Return: The new node created.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
(*head) = new;
return (new);

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new;
new->prev = last;

return (new);
}
