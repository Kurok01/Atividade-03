#include <stdio.h>

int main () {
	
	int i, valor;
	
	printf ("Digite um valor entre 1 e 10: ");
	scanf ("%d", &valor);
	
	while (valor < 1 || valor > 10) {
		
		printf ("Digite um valor valido: ");
		scanf ("%d", &valor);
	}
	
	printf ("\nTABUADA DE %d: \n\n", valor);
	
	for (i = 1; i <= 10; i++) {
		
		printf ("%d X %d = %d\n", valor, i, valor * i);
	}
	
	return 0;
}
