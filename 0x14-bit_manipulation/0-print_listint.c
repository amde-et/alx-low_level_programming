#include <stdio.h>
#include "lists.h"

/**
* print_listint - Will print all the elements of a linked list
* @h: Head of the linked list
* Return: Number of nodes
**/

size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
