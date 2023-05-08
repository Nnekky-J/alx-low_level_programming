#include <stdio.h>
#include "main.h"
/**
  *_strpbrk - A function that searches a
  *string for any of a set of bytes
  *
  *@s: Input
  *
  *@accept:Input string
  *
  *Return: A pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[k] == accept[n])
				return (s + k);
		}
	}
	return (NULL);
}
