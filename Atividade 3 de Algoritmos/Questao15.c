#include <stdio.h>

int main () {
	
	int i, contador = 0, soma = 0;
	float media = 0;
	
	for (i = 15; i <= 100; i++) {
		
		soma += i;
		contador++;
	}
	
	media = soma / contador;
	
	printf ("Media dos valores entre 15 e 100: %.2f", media);
	
	return 0;
}
