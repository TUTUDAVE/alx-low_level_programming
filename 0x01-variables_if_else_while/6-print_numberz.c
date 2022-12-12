#include <stdio.h>

/**
 * main -printing numbers of base 10 starting from 0 using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar((k % 10) + '0');
	}

	putchar('\n');

}
