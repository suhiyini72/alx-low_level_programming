#include "lists.h"

/**
 * list_len - This is the main function of number of nodes of linked list
 * @h: This is the head of linked list
 * Return: This is the number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nods = 0;

	while (h)
	{
		nods++;
		h = h->next;
	}
	return (nods);
}
