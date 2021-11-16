#include "lists.h"
/**
 * sum_listint - Sums a list
 * @head: listint_t
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int S = 0;
while (head)
{
S += head->n;
head = head->next;
}
return (S);
}
