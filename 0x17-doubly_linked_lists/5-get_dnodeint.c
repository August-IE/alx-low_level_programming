#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of
 *		a dlistint_t linked list..
 * @head: The head of the dlistint_t list.
 * @index: The index of the node starting from 0
 *
 * Return: NULL - If the node does not exist.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
