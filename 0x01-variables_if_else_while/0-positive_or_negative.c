#include <stdlib.h>
#include <time.h>
/**
 * main - Entry pont of my program
 *
 * Description: assigning a random number
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

