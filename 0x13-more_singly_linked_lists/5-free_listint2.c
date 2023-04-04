#include "lists.h"

/**
 * free_listint2 - This function frees a list and sets head to NULL
 * @head: This is a pointer to the listint_t structure
 * Return: Returns nothing.
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

tmp = *head;
while (*head)
{
tmp = *head;
(*head) = (*head)->next;
free(tmp);
}
*head = NULL;
}
