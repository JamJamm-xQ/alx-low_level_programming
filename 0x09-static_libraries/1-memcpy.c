#include "main.h"
/**
 * _memcpy -  Copies n bytes from src to dest
 * @dest: Pointer to destination address
 * @src: Pointer to source address
 * @n: number of bytes to be copied
 * Return: Pointer to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
