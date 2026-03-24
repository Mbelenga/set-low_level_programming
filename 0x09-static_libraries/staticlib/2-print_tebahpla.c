#include "my_functions.h"

/**
 * print_tebahpla - prints alphabet in reverse
 */
void print_tebahpla(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		_putchar(c);
	}
	_putchar('\n');
}
