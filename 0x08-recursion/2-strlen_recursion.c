#include "main.h"
/**
  *_strlen_recursion - A function that returns the length of a string
  *
  *@s: A string
  *
  *Return: Always 0 (Success)
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
