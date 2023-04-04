#include "lists.h"

/**
 * find_listint_loop - This function gets a loop in a linked list
 * @head: This is a pointer to the listint_t structure
 * Return: Returns the address of a node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head, *last = head;

while (first && last && last->next)
{
last = first->next;
last = last->next->next;
if (first == last)
{
return (first);
}
}
return (NULL);
}
