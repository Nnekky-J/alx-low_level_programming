#include <stdlib.h>
/**
  *malloc_checked - Allocates memory using malloc
  *
  *@b: The pointer
  *
  *Return: A pointer to the allocated memory
  *
  */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);

	if (check == NULL)
		exit(98);

	return (check);

}
