#include "lists.h"

/**
  * listint_len - list the number of element in a linked list
  * @h: singly linked list
  * Return: Number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
