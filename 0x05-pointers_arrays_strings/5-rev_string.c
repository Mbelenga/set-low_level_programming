#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
