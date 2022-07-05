#include <stdio.h>
/**
*main - Start of program
*print a-z in reverse
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
