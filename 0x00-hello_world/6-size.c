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

	printf("size of a char: %lu byte(s)\n", sizeof(f));
	printf("size o int: %lu byte(s)\n", sizeof(j));
	printf("size of float: %lu byte(s)\n", sizeof(k));
	printf("size of long int: %lu byte(s)\n", sizeof(s));
	printf("size of long long int: %lu byte(s)\n", sizeof(a));
	return (0);
}
