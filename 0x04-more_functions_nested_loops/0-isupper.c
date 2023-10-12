#include "main.h"

/**
 * _isupper - check if uppercase
 *this code check for if a is uppercase
 * return 1 or 0
 * code made by ahmed magdy
 * ALX CO 1 BLENDED
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c < 65 || c > 90)
	{
		return (0);
	}
}

