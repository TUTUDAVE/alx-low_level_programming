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
		putchar(ch);
	}

	else if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}


	return (0);

}
