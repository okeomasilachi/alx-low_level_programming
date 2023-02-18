#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main check to the probabilty of each charge of number */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("%i is positive\n", n);
	}
	else if (n == 0)
	{
		puts("%i is 0\n", n);
	}
	else
	{
		puts("%i is negative\n", n);
	}
	return (0);
}
