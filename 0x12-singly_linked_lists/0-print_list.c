#include "lists.h"
#include <stdio.h>

/**
* print_list - prints the elements in a list
* @h: the list_t list
* Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
