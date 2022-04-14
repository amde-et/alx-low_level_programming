#include "lists.h"

/**
* list_len - Will return the number of elements in a linked list_t
* @h: Value of the leng str
* Return: Lenght of linked list
**/

size_t list_len(const list_t *h)
{
size_t length;
for (length = 0; h != NULL; length++)
{
h = h->next;
}
return (length);
}
