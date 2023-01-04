#include <stdio.h>
#include "main.h"

/**
 * factorial - factoriala function that returns the factorial of a given number.
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
