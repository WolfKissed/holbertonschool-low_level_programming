#include "lists.h"
/**
 * sum_listint - Sums a list
 * @head: listint_t
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int S = 0;
if (head== NULL)
return (0);
while (head ->next)
{
S += head->n;
head = head->next;
}
S += head->n
return (S);
}
