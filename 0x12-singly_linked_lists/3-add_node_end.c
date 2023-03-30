#include "lists.h"
#include <string.h>

/**
* add_node_end - This function adds a node to tail of a linked list
* @head: This is the pointer to a list_t pointer
* @str: The string to add as node
* Return: The pointer to new element of list, NULL in case of failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int lent = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[lent])
		lent++;

	new_node->len = lent;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
