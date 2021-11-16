#include "lists.h"
/**
* get_nodeint_at_index - Returns a node
* @head: listint_t
* @index: int
* Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i = 0;
while (i < index && head->next)
{
head = head->next;
i++;
}
if (i < index)
return (NULL);
else
return (head);
}
