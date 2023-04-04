#include "lists.h"

/**
 * sum_listint - This function sums given values from listint_t
 * @head: This is a pointer to the listint_t structure
 * Return: Returns the sum of all the data n from the list
 */

int sum_listint(listint_t *head)
{
int add = 0;

if (head == NULL)
return (0);

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
