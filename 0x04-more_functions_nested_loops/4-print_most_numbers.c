#include "main.h"
/**
 * print_most_numbers - A fu8nction that prints numbers
 *
 * Description: Prints 0 to 9 except 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int index;
	char numbers[] = "01356789";

	for (index = 0; numbers[index] != '\0'; index++)
	{
		_putchar(numbers[index]);
	}
	_putchar('\n');
}
