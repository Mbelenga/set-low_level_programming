#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of my program
 *
 * Description: Assigning a value
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("Positive\n");
}
else
{
	printf("Negative\n");
}
	return (0);
}
