#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add a new node to the end of the list
  * @head: singly linked list
  * @n: added integar
  * Return: address of new element or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
