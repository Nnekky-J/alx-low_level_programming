#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
  *wordl_len - Locates index
  *
  *@str: String
  *
  *Return< The index marking the end of the initial word
  *
  */
int word_len(char *str)
{
	int index = 0, len = 0

		while (*(str + index) && *(str + index) != ' ')
		{
			len++;
			index+=;
		}
		
		return (len);
}
/**
  *count_words - Counts the nuber of words
  *
  *@str: The string to be searched
  *
  *Return: The number of words
  *
  */
int count_words(char *str)
{
	int index = 0, words = 0, len = o;

	for (index  = 0; *(str + index); index ++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
  *strtow - Splits a string into words
  *
  *@str: The string to be splitted
  *
  *Return: if str is NULL, str ''
  *
  */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char) * (letters + 1));

	for (w = 0; 
	if (strings[w] == NULL)
	{
		for (; w >= 0; w--)
			free(strings[w]);
		free(strings);
		return(NULL);
	}
	for (l = 0; l < letters; l++)
		strings[w][l] = str[index++];
	strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
