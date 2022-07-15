#include "main.h"
/**
 * string_toupper - changes all letters to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] += ('A' - 'a');
		i++;
	}
	return (n);
}
