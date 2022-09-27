#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Stores a different value everytime it is run
 * whether the number is less than 6 or greater than 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
