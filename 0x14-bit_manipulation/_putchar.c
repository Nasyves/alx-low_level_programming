#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * Return: On success 1.
 *
 * @c: The character to print
 * On error, -1 is returned, and error no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
