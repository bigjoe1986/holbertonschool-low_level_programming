/*
* File: 0-positive_or_negative.c
* Auth: bigjoe1986
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print any number that could be positive or negatif
*
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
