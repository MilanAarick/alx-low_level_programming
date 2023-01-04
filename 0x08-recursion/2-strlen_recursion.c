#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Recursive function that prints a string in reverse
 * @s: String to print
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}