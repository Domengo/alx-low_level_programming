#include "lists.h"

/**
*free_listint - function frees memory allocated by malloc
*@head: listint_t list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
