#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is", n);
	if (n > 0)
		 printf(" positive\n");
	else if (n == 0)
		printf(" zero\n");
	else if (n < 0)
		printf(" negative\n");
	return (0);
}


