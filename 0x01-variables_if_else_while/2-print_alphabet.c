#include <stdio.h>

/**
 * main - Entry point for printing lowercase letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
putchar('\n');

	return (0);
}
