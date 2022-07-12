#include "main.h"
/**
 * * swap_int - Changing value in memory with pointers
 * * @a: Pointer to int a location
 * * @b: Pointer to int b location
 * *Return: Null/Void
 * **/
void swap_int(int *a, int*b){
	int p = *a;
	int q = *b;

	*a = q;
	*b = p;
}
