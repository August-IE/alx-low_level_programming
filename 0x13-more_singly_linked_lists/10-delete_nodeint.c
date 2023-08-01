#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 *			at index index of a listint_t linked list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node that should be deleted - index starts at 0.
 * Return: 1 - If successful
 *         -1 - If it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int node;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
