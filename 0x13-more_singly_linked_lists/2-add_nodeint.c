#include "lists.h"
/**
* add_nodeint - adds a node
* @head: list_t
* @n:int
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *m;
m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);
m->n = n;
m->next = *head;
*head = m;
return (m);
}
