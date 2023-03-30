#include "lists.h"
#include <stdio.h>

/**
 * print_list - This is a function which prints elements in a linked list
 * @h: This is the pointer to the head of the list
 * Return: The number of nodes in the list as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int lists = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		lists++;
	}
	return (lists);
}
