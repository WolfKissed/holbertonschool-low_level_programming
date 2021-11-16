#include "lists.h"
/**
* free_listint - frees a list
* @head:list_t
* Return: 0
*/
void free_listint(listint_t *head)
{
listint_t *x, y*;
y = head;
while (y != NULL)
{
x = y->next;
free(y);
y = x;
}
}
