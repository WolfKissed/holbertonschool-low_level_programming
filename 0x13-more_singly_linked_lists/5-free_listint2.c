#include "lists.h"
/**
* free_listint2 - frees a list
* @head: list_t
* Return: 0
*/
void free_listint2(listint_t **head)
{
listint_t *x;
if (head == NULL)
return;
while (*head)
{
x = *head;
*head = (*head)->next;
free(x);
}
head = NULL;
}
