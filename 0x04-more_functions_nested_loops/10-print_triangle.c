#include "main.h"
/**
 * print_triangle - A function that prints a triangle
 * @size: Triangle's height
 * 
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row;
	int space;
	int harsh;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - range; space > 0; range++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < range; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
