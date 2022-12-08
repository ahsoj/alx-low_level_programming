#include "lists.h"

/**
 * dlistint_len - counts the number of elements in the linked dlistint_t list
 * @h: the number of elements in the dlistint_t list
 *
 * Return: the number of elements in the dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}

