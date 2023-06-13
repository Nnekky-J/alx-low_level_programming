#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 *
 * @filename: text file being read
 *
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t men;
	ssize_t j;
	ssize_t k;

	men = open(filename, O_RDONLY);
	if (men == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(men, buf, letters);
	j = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(men);
	return (j);
}
