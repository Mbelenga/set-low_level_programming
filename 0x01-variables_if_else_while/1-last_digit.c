#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of my program
 *
 * Description: Assigning a random number to the variable
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("last digit of %d is %d", n, last_digit);

if (last_digit > 5)
	printf("is greater than 5");
else if (last_digit == 0)
	printf("and is 0");
else
	("and is less than 6 not 0");

printf("/n");

	return (0);
}
