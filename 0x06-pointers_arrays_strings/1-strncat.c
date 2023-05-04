#include "main.h"
/**
  *_strncat - A function that concatenates two strings
  *
  *@dest: The destination string
  *
  *@src: The source string
  *
  *@n: The number of bytes to be appended to dest
  *
  *Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
