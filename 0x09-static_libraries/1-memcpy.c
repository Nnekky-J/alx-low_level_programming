#include "main.h"
/**
  *_memcpy - Function copies n bytes from
  *memory area src to memory area dest
  *
  *@dest: The destination in memory
  *@src: The The memory area to be copied from
  *@n: The number of bytes to be copied
  *Return: A pointer to dest
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
