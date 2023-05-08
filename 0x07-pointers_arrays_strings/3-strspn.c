#include "main.h"
/**
  *_strspn - A function that gets the length of a prefix substring
  *
  *@s: Input
  *
  *@accept: Input
  *
  *Return: The number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n, value, check;

	value = 0;
	for (k = 0; s[k] != '\n'; k++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			n++;
	}

	return (n);
}
