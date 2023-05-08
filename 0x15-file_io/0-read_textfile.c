#include<stdlib.h>
#include "main.h"

/**
 * read_textfile - read text file and print it to standard output
 * @filename: text file to be read
 * @letters: number of letter read
 *
 * Return: c for the number of bytes read and printed
 *	0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t c;
	ssize_t d;

	b = open(filename, O_RDONLY);
	if (b == 1)
		return (0);
	a = malloc(sizeof(char) * letters);
	d = read(b, a, letters);
	c = write(STDOUT_FILENO, a, d);
	free(a);
	close(b);
	return (c);
}
