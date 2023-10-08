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
        printf("%d is positive\n");
    }
    else if (n < 0)
    {
        printf("%d is negative\n");
    }
    else if (n = 0)
    {
        printf("%d is zero\n");
    }
	return (0);
}
