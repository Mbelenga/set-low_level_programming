#include <stdio.h>

/**
 * main - entry point of my program
 * 
 * Description: prints numbers from 1 to 100
 * Return: Always 0
 */
int mainvoid()
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if (index % 3 == 0 && index % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}
}