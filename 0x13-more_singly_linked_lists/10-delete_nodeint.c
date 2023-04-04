#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function deletes a node at
 * a specified index from node list
 * @head: This is a pointer to listint_t structure
 * @index: This is an index of the node to be deleted
 * Return: The integer 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *d_node;
unsigned int k = 1;

if (*head == NULL)
return (-1);

tmp = *head;
if (index == 0)
{
*head = (*head)->next;
free(tmp);
}
else
{
while (k < index)
{
tmp = tmp->next;
if (tmp == NULL)
return (-1);
k++;
}
d_node = tmp;
d_node = d_node->next;
tmp->next = d_node->next;
free(d_node);
}
return (1);
}
