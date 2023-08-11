#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/* Declare variables */
	int n;

	/* Seed the random number generator */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check the value of n and print corresponding message */
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");

	return (0);
}
