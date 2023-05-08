#include "main.h"

/**
 * create_file - creates file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to the string to write to that file
 * Return: 1 if success and -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, leng = 0;
	
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, leng);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
