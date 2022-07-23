#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the element
  * @h: head
  * Return: number of node
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
