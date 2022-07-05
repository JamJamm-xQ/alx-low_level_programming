#include <stdio.h>
/**
*main - Start of program
*print all alphabets except q and e
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			;
		}
		else
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
