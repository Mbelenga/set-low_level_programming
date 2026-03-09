#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14
 *
 * Description: prints 1 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 0; counter <= 9; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
