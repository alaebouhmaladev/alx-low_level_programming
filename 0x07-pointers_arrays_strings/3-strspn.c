#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r1;

	while (*s)
	{
		for (r1 = 0; accept[r1]; r1++)
		{
			if (*s == accept[r1])
			{
				n++;
				break;
			}
			else if (accept[r1 + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
