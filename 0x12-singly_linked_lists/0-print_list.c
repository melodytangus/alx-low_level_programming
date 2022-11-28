
#include "lists.h"
/**
 * print_list - print list in struct size_t
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}

return (counter);
}
