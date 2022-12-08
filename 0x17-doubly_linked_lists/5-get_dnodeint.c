#include "lists.h"

/**
 * get_dnodeint_at_index - located a node in a dlistint_t list
 * @head: the head of the dlistint_t list
 * @index: the node to locate
 *
 * Return: NULL if node does not exist or the address of the located node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head ==NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
