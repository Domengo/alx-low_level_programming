#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	*head = new;
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = new;
	}
	return (new);
}
