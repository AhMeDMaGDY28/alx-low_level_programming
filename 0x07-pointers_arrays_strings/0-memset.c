#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *p = &b;

		    unsigned x = (n - 1),
	     i;

	for (i = 0; i < x; i++)
	{
		s[i] = b;
	}

	return (p);
}
