#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: Character to be checked
 *
 *Return: 1 for true 0 for false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
