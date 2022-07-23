#include "lists.h"

/**
  * list_len - give the lenght of the string
  * @h: list list_t
  * Return: size_t
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
