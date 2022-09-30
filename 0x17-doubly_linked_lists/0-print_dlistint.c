#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t
* @h: pointer to the dlistint_t start
*
* Return: the number of nodes in h
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
