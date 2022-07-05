#include <stdio.h>
/**
*main - Start of program
*print all single digit numbers of base 10 that is, 0-9
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
