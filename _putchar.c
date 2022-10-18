#include "main.h"

/**
 * _puts - print a string with a newline
 * @str: string
 ** Return: (str - a);
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - write the character c to stdout
 * @c: charcter to lrint
 *
 * Return: 1 on success
 * return -1 on failure and error is set appriximately
 */

int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] =  c;
	return (1);
}
