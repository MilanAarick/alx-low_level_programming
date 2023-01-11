#include "main.h"

/**
*function that fills memory with a constant byte.
*
*Prototype: char *_memset(char *s, char b, unsigned int n);
*The _memset() function fills the first n bytes of the memory area pointed 
*to by s with the constant byte b
*Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}