#include "lists.h"
#include <string.h>

/**
 * add_node - This is a function which adds a node to the head of a linked list
 * @head: This is a pointer to a list_t pointer
 * @str: This is pointer to string which adds as node
 * Return: This is a pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int lent = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[lent])
		lent++;

	emp->len = lent;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
