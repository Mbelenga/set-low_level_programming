#include <unistd.h>

/**
 * main - Entry point of my program
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}
