#include <stdlib.h>

/**
 * _realloc-- - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory
 * @old_size: size of space allocated for @ptr
 * @new_size: new size of bytes to memory block
 * Return: pointer to allocated memory on success,
 * on failure return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)new_ptr);
}
