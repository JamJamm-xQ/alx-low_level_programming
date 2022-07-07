#include "main.h"
/**
*main - Start of Program
*print a-z using putchar
*Return: Value 0 
**/
int main(void)
{
	char alphabet;
	int i;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
