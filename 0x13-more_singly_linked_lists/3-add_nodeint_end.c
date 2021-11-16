#include "lists.h"
/**
* add_nodeint_end - adds a node
* @head: listint_t
* @n: int
* Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *m, *x;

m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);
m->n = n;
m->next = NULL;
if (*head == NULL)
{
*head = m;
return (m);
}
x = *head;
while (x->next)
x = x->next;
x ->next = m;
return (m);
}
