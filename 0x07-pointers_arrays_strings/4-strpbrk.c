#include "main.h"

/**
* The _strstr() function finds the first occurrence of 
* the substring needle in the string haystack.
*  The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
 **/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
