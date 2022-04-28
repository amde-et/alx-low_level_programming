#include "lists.h"

/**
* pop_listint - Will delete the head node of a linked list
* @head: The head of the linked list
* Return: The data inside the elements that were deleted
**/

int pop_listint(listint_t **head)
{
listint_t *new_head;
int n = 0;
if (*head != NULL)
{
new_head = (*head)->next;
n = (*head)->n;
free(*head);
*head = new_head;
}
return (n);
}
