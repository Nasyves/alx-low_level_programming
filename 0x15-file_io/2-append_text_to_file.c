#include "main.h"

/**
 * append_text_to_file - End of file text append
 * @filename: pointer to the file name
 * @text_content: the string to add
 *
 * Return:function fail || filename null || file not exist prtint -1
 * otherwise print 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);

	close (o);

	return (1);
}
