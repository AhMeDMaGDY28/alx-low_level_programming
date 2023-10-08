#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** the main point of this code to know is the number of n positve or negative or equal zero
    *main - Entry point
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%i is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%i is negative\n", n);
    }
    else if (n == 0)
    {
        printf("%i is zero\n", n);
    }
	return (0);
}
