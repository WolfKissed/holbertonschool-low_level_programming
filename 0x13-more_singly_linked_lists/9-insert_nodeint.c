#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: listint_t
 * @idx: unsigned int
 * @n: int
 *
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *m, *x = *head;
unsigned int i;

m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);
m->n = n;
if (idx == 0)
{
m->next = x;
*head = m;
return (m);
}
for (i = 0; i < (idx - 1); i++)
{
if (x == NULL || x->next == NULL)
return (NULL);
x = x->next;
}
m->next = x->next;
x->next = m;
return (m);
}
