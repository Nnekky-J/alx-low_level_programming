#include "main.h"
/**
  *_memset - Function fills the first n bytes
  *of the memory area pointed to by s with the constant byte b
  *
  *@s: the pointer
  *@b: the character to be filled
  *@n: The number of bytes to be filled
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
