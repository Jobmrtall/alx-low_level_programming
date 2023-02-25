#include "main.h"
/**
* main - prints if integer is positive or negative
* Return: 0
*/

void postive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
