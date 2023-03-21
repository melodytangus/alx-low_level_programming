#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds node at the beggining of the linked
*               list.
* @head: A pointer to the first node.
*@n: Integer value to be added.
*
*Return: the newly added linked list.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
new->prev = NULL;

if (*head != NULL)
(*head)->prev = new;

*head = new;

return (new);
}
