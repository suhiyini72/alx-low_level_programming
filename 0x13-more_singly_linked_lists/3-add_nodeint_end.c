#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node to the end of list
 * @head: This is a pointer to list structure
 * @n: This is an integer data to put into the new node
 * Return: The address of a new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node_new, *tmp;

node_new = malloc(sizeof(listint_t));
if (node_new == NULL)
return (NULL);

node_new->n = n;
if (*head == NULL)
{
node_new->next = *head;
*head = node_new;
}
else
{
node_new->next = NULL;
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = node_new;
}
return (node_new);
}
