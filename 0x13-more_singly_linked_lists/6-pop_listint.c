#include "lists.h"
/**
* pop_listint - Deletes a head node then returns its data
* @head: listint_t
* Return: 0
*/
int pop_listint(listint_t **head)
{
listint_t *x;
int n;
x = *head;
if (x == NULL)
return (0);
*head = x->next;
n = x->n;
free(x);
return (n);
}
