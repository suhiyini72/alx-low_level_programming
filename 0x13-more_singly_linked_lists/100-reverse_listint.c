#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: This is a pointer that points to listint_t structure
 * Return: returns a pointer to the reverse list of first node
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *back = NULL, *forward;

if (*head == NULL)
return (NULL);

while (*head)
{
forward = (*head)->forward;
(*head)->forward = back;
back = *head;
*head = forward;
}
*head = back;
return (*head);
}
