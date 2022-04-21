
#include <stdio.h>
#include "lists.h"

/**
 *print_list-print list of data
 *@h:list_t
 *Return:printvale of str
 */

size_t print_list(const list_t *h)
{
size_t s = 1;
if (h == NULL)
return (0);
while (h->next != NULL)
{
if (h->str == NULL)

printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
printf("[%u] %s\n", h->len, h->str);
return (s);
}
