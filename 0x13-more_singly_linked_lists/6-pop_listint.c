#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * Return: 0 - If the linked list is empty
 *		Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
