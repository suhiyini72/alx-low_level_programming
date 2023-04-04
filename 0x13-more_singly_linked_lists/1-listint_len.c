#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function returns the number of elements in the list
 * @h: This is a pointer to the listint_t structure
 * Return: Returns the number of elements.
 */

size_t listint_len(const listint_t *h)
{
size_t nods = 0;

while (h)
{
h = h->next;
nods++;
}
return (nods);
}
