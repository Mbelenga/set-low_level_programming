#include "my_functions.h"

/**
 * positive_or_not - checks if number is positive, negative or zero
 * @n: number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int positive_or_not(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}