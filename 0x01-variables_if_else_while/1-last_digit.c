#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry to print automatic asigned numbers
 *
 * Entry: 0 (suuccess)
 */

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	printf("Last digit of %d is %d", n, k);

	if (k > 5)
	{
		printf("and is graeterthan 5\n");
	}

	if (k == 0)
	{

		printf("and is 0\n");
	}

	if (k < 6 && != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
