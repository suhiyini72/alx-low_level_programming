#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - This function will print elementsin a linked list
 * @head: This is a pointer to listint_t structure
 * Return: returns the number of nodes, else exits with 98 upon failure
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nods = 0;
const listint_t *first = head, *last = head;

if (head == NULL)
exit(98);

while (first && last && last->next && head)
{
first = first->next;
last = last->next->next;
if (first == last)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nods++;
}
head = NULL;
return (nods);
}
