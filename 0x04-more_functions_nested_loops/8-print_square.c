#include "main.h"
/**
 * print_square - A function that prints out a square
 * @size: size of the square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
