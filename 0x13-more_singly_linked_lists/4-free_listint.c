#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees the allocated memory
  * @head: singly linked list
  * Return: void
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
		free(head);
}
