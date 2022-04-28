#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the
 * nth node of a listint_t linked list.
 * @head: head ref.
 * @index: index to print elements
 * Return: Current node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
for (count = 0; head != NULL; count++, head = head->next)
if (count == index)
return (head);
return (NULL);
}
