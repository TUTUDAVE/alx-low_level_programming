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
	float k;
	long int s;
	long long int a;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size o int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
