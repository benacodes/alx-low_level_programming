#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: linked liat
  * @index: index of node
  * Return: address or NULL if it does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
		return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
