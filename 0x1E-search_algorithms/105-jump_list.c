#include "search_algos.h"

/**
  * jump_list - searches for a value in an array of
  * integers using the Jump search algorithm
  *
  * @list: input list
  * @size: size of the array
  * @value: value to search in
  *
  * Return: index of the number
  *
  */

listint_t *jump_list(listint_t *list, size_t size, int value)
{

	size_t step = 0, step_size = sqrt(size);
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
