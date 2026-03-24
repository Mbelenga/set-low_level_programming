#include "my_functions.h"

/**
 * print_base16 - prints hexadecimal characters
 */
void print_base16(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
