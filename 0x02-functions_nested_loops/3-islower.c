#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c:Character to be checked
 * Return:  1 if c is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
