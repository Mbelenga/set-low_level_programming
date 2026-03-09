#include "main.h"
/**
 * print_most_numbers - A fu8nction that prints numbers
 *
 * Description: Prints 0 to 9 except 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;
	char numbers[] = "01356789";

	for (i = 0; numbers[i] != '\0'; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
