#include "lists.h"

/**
 * free_list - Frees memory of the linked list
 * @head: the beginning of the list
**/

void free_list(list_t *head)
{
list_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
