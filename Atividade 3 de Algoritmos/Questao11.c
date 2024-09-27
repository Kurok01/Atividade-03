#include <stdio.h>

int main () {
	
	int n, i;
	
	printf ("Digite um numero: ");
	scanf ("%d", &n);
	
	while (n <= 0) {
		
		printf ("Digite outro valor > 0: ");
		scanf ("%d", &n);
	}
	
	for (i = 1; i <= n; i++) {
		
		printf ("%d  ", i);
	}
	
	return 0;
}
