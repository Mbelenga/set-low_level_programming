#include "main.h"

/**
 * print_alphabet_x10 - A function that prints x10 the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int index;
	char character;

	for (index = 0; index < 10; index++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
