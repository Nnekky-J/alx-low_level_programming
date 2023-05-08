#include <stdio.h>
#include "main.h"
/**
  *_strchr - A function that locates a character in a string
  *
  *@s: Input
  *
  *@c: First occurence of the character
  *
  *Return: A pointer to the first occurrence
  *of the character c in the string s
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
