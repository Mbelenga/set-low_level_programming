#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: number of dashes to print
 *
 *Return: no return value
 */
void print_line(int n)
{
	int index = 0;

	while  (n > 0 && index < n)
	{
		_putchar('_');
		index++;
	}
	_putchar('\n');
}
