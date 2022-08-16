#include "lists.h"

/**
*free_listint2 - function frees memeory allocated by malloc and sets head NULL
*@head: node to be set NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
