#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a list
 * while returning the head node's data k.
 * @head: This is a pointer to listint_t structure.
 * Return: The head node's data from deleted element
 */

int pop_listint(listint_t **head)
{
listint_t *node_new;
int k;

if (*head == NULL)
return (0);

k = (*head)->k;
node_new = (*head)->next;
free(*head);
*head = node_new;
return (k);
}
