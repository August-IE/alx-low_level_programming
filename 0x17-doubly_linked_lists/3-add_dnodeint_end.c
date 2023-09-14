#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 *		of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL - If the function fails.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}
