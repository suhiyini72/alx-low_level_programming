#include "lists.h"

/**
 * insert_nodeint_at_index - This function will insert a node in a given index
 * @head: This pointer will listint_t structure
 * @idx: refers to the index of the list
 * @n: This represents an integer data of a new node
 * Return: A new node address at the specified index or NULL for failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k = 1;
listint_t *node_new, *tmp;

if (head == NULL)
return (NULL);

node_new = malloc(sizeof(listint_t));
if (node_new == NULL)
return (NULL);

if (*head == NULL)
{
*head = node_new;
node_new->next = NULL;
node_new->n = n;
return (node_new);
}

if (idx == 0)
{
node_new->next = *head;
node_new->n = n;
*head = node_new;
return (node_new);
}
tmp = *head;

while (k < idx)
{
tmp = tmp->next;
k++;
}
node_new->n = n;
node_new->next = tmp->next;
tmp->next = node_new;
return (node_new);
}
