#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints all the elements in the linked list
 * @h: This is a pointer to listint structure
 * Return: Returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nods = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nods++;
}
return (nods);
}
