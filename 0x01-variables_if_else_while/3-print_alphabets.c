#include <stdio.h>

/**
 * main - Use 'putchar' to print lowercase and then uppercase alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A'

	while (c <= 'Z')
	{
		putchar(C);
		c++;
	}

	putchar('\n');

	return (0);
}
