#include "lists.h"

/**
* free_listint - Frees a linked list
* @head: The head of the linked list
* Return: Always 0.
**/

void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
