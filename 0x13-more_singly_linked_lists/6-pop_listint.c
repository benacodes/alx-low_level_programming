#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - delets the head node from a list
  * @head: singly linked list
  * Return: 0 if empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *current;

	if (*head == NULL)
		return (0);

	temp = current = *head;
	if (*head)
	{
		n = current->n;
		*head = current->next;
		free(temp);
	}

	return (n);
}
