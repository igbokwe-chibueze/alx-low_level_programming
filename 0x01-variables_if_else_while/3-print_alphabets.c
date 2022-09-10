#include <stdio.h>

/**
 * main - Use 'putchar' to print lowercase and then uppercase alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		putchar(C);
		c++;
	}
	putchar('\n');
	return (0);
}
