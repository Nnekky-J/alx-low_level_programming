#include "main.h"
/**
  *_memset - Function fills the first n bytes
  *of the memory area pointed to by s with the constant byte b
  *
  *@s: The starting address of the memory to be filled
  *@b: The desired value
  *@n: The number of bytes to be changed
  *Return: A pointer to the memory s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
