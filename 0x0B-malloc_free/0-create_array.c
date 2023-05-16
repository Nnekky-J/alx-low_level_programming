#include <stdlib.h>
#include "main.h"
/**
  *create_array - Creates an array of characters
  *
  *@size: The size of the integer
  *
  *@c: The parameter for assignment
  *
  *Return: Pointer to array
  *
  */
char *create_array(unsigned int size, char c)
{
	unsigned int j;

	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;

	return (array);
}
