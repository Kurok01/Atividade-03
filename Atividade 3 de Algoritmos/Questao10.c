#include <stdio.h>

int main () {
	
	int n, i;
	
	printf ("Digite um numero inteiro maior que 0: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++) {
		
		printf ("%d  \n", i);
	}
	
	return 0;
}
