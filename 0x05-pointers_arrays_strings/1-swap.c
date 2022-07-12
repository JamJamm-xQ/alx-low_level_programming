#include "main.h"

void swap_int(int *a, int*b){
	int p = *a;
	int q = *b;

	*a = q;
	*b = p;
}
