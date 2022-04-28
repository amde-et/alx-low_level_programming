#include "lists.h"

/**
* add_nodeint_end - Will add a new node at the end of the linked list
* @head: Head of the linked list
* @n: Value to add to the new node
* Return: The address of the new element, or NULL it failed
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *last = *head;
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (last->next);
}
