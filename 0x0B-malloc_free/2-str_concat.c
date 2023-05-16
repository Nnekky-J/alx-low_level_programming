#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
  *str_concat - Concatenates two strings
  *
  *@s1: The first string
  *
  *@s2: The second string
  *
  *Return: The concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int i, l;
	char *newcopy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = l = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0')
		l++;
	newcopy = malloc(sizeof(char) * (i + l + 1));

	if (newcopy == NULL)
		return (NULL);
	i = l = 0;
	while (s1[i] != '\0')
	{
		newcopy[i] = s1[i];
		i++;
	}

	while (s2[l] != '\0')
	{
		newcopy[i] = s2[l];
		i++, l++;
	}
	newcopy[i] = '\0';
		return (newcopy);
}
