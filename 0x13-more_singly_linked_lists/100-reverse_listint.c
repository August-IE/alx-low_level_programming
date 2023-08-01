#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A pointer to the address of the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd, *bwd;

	if (head == NULL || *head == NULL)
		return (NULL);

	bwd = NULL;

	while ((*head)->next != NULL)
	{
		fwd = (*head)->next;
		(*head)->next = bwd;
		bwd = *head;
		*head = fwd;
	}

	(*head)->next = bwd;

	return (*head);
}
