#include <stdio.h>
/**
 * main -printing of variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	char f;
	int j;
	long int k;
	long long int s;
	float a;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
