#include "lists.h"
#include <string.h>

/**
 * add_nodeint - This function adds a new nod at the start of a list
 * @head: This is a pointer to list_t structure
 * @n: This is an integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_new;

node_new = *head;
*head = malloc(sizeof(listint_t));
if (!*head)
return (NULL);

(*head)->n = n;
(*head)->next = node_new;
return (*head);
}
