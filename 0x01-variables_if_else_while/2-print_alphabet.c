#include <stdio.h>
/**
*main -  Beginnig of program
*print a-z using putchar
*Return: Value 0
**/
int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
