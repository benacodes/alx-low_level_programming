#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node to the beginning of a list
  * @n: integar to be added
  * @head: singly list
  * Return: address of new element or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
