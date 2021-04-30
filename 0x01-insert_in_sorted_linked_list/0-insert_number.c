#include "lists.h"

/**
 * insert_node - a function in that inserts a number
 * into a sorted singly linked list
 *
 * @head: Double pointer for the linked list
 * @number: Number to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int n)
{
	listint_t *cpy = *head;
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (cpy->next == NULL)
	{
		cpy->next = new;
	}
	else
	{
		while (cpy->n > new->n)
			cpy = cpy->next;
		cpy->next = new;
	}
	return (new);
}
