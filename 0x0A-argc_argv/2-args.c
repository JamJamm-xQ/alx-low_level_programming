#include <stdio.h>
/**
* main -  prints all arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc;)
		printf("%s\n", argv[i]);
		i++;
	return (0);
}
