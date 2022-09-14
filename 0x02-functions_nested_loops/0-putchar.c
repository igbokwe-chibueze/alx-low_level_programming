#include "main.h"

/**
 * main - Print "_putchar" followed by a new line without standard libraries.
 *
 * Return: 0
 */
int main(void)
{
	char c = "_putchar";

	while (c)
	{
		_putchar(c);
		h++;
	}

	_putchar('\n');
	return (0);
}
