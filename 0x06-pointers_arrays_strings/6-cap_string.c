#include "main.h"

char *cap_string(char *a)
{
	int i, cap;

	cap = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (cap == 1 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
			cap = 0;
		}

		else if (a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' ||
			   a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' ||
			   a[i] == '{' || a[i] == '}' || a[i] == ' ' ||
			   a[i] == '\n' || a[i] == '\t')
		{

			cap = 1;
		}
		else
		{
			cap = 0;
		}
	}
	return (a);
}
