#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - This function frees a linked list
 * @h: This is a pointer to listint_t structure
 * Return: returns the size of the list which is freed
 */

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp;

tmp = *h;
while (tmp)
{
tmp = *h;
tmp = tmp->next;
free_list(tmp);
count++;
}
*h = NULL;
return (count);
}

/**
* free_list - This function frees a recursive listint_t
* @head: This is a pointer to the listint_t structure
* Return: Returns nothing
*/

void free_list(listint_t *head)
{
listint_t *tmp;

if (head)
{
tmp = head;
tmp = tmp->next;
free(tmp);
free_list(tmp);
}
free(head);
}
