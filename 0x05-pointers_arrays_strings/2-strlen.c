#include "main.h"

/**
 * _strlen-Finds the length of a string.
 *
 * @s: String to a pointer whose length is to be determined.
 *
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0) /*increament until last character not up to zero*/
	{
		p++;
	}

	return (p);
}
