#include <stdio.h>

/**
 * main -printing alphabet except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch\n);
	}

	if (ch != 'e' && ch != 'q')
	{
		putchar(ch\n);
	}


	return (0);

}
