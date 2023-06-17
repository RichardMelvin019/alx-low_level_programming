#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, v);
	}
	else if (v == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, v);
	}
	else if (v < 6 && v != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);
	}
	/* your code goes there */
	return (0);
}
