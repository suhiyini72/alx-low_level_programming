#include "lists.h"

/**
 * free_listint - This function frees a linked list
 * @head: This is a pointer to listint_t structure
 * Return: Returns nothing
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head;
head = head->next;
free(tmp);
}
free(head);
}
