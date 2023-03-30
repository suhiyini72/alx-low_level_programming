#include "lists.h"

/**
 * free_list - This is the function which frees all elements in a linked list
 * @head: This is a pointer to the head element of the list
 * Return: To nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
