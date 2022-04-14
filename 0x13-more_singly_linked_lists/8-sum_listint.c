#include "lists.h"

/**
* sum_listint - Returns the sum of all the data of a list
* @head: head of a list.
* Return: sum of all the data (n).
**/

int sum_listint(listint_t *head)
{
int sum;
sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
