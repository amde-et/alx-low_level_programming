#include "lists.h"

/**
* listint_len - Will count the elements in a linked list
* @h: The head of the linked list
* Return: The number of elements in a linked list
**/

size_t listint_len(const listint_t *h)
{
size_t i;
for (i = 0; h; i++)
h = h->next;
return (i);
}
