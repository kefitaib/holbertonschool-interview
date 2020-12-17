#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert a node in a sorted list
 * @head: pointer to head of list
 * @number: value to inset in the list
 * Return: pointer to the new node nodes
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
	listint_t *h = NULL;
	listint_t *prev = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	h = *head;
	while (h)
	{
		if (h->n < number)
		{
			prev = h;
			h = h->next;
		}
		else
		{
			new->next = prev->next;
			prev->next = new;
			return (new);
		}
	}

	return (NULL);
}
