#include <stdio.h>

int main () {
	
	float valor1, valor2, resultado;
	
	printf ("Digite um valor: ");
	scanf ("%f", &valor1);
	
	do {
		
		printf ("Digite outro valor: ");
		scanf ("%f", &valor2);
		
	} while (valor2 == 0);
	
	resultado = valor1 / valor2;
	
	printf ("Divisao entre %.2f / %.2f = %.2f", valor1, valor2, resultado);
	
	return 0;
}
