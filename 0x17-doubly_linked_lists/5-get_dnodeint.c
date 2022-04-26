#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a list
 * @head: head
 * @index: node
 *
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
