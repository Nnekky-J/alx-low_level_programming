#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *_strdup - Returns a pointer to a newly allocated space in memory
  *
  *@str: String char
  *
  *Return: A pointer to the newly allocated strings
  *
  */
char *_strdup(char *str)
{
	char *copier;
	int j, k = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	copier =  malloc(sizeof(char) * (j + 1));

	if (copier == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		copier[k] = str[k];

	return (copier);
}
