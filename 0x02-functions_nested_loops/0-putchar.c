#include "main.h"

/**
 * main - Print "_putchar" followed by a new line without standard libraries.
 *
 * Return: 0
 */
int main(void)
{
	char *h = "Holberton\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}
