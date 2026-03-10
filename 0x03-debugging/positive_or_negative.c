#include <stdio.h>
#include "main.h"

void positive_or_negative(int index)
{
	if (index > 0)
		printf("%d is positive\n", index);
	else if (index == 0)
		printf("%d is zero\n", index);
	else
		printf("%d is negative\n", index);
}	
