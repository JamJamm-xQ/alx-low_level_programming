#include <stdio.h>
/**
*main - Start of program
*print all the numbers of base 16 in lowercase, followed by a new line.
*Return: Value 0 (true)
**/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
