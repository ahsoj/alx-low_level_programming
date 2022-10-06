#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	old_ptr = ptr;

	if (new_size , old_size)
	{
		for (i = 0;i < old_size; i++)
			ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);

}
