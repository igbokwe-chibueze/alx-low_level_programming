#include "mainn.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
