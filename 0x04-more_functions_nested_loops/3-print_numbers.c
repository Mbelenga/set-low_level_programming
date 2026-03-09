#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers
 *
 * Description: prints numbers from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
