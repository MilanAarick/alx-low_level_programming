#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * Write a program that prints the alphabet in lowercase, 
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)


{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}