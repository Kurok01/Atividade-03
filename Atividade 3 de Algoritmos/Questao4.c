#include <stdio.h>

int main () {
	
	float valor1, valor2, resultado;
	
	printf ("Digite um valor: ");
	scanf ("%f", &valor1);
	
	do {
		
		printf ("\nDigite outro valor: ");
		scanf ("%f", &valor2);
		
		if (valor2 == 0) {
			
			printf ("\nVALOR INVALIDO\n");
			printf ("\nO segundo valor precisa ser diferente de 0\n");
		}
	} while (valor2 == 0);
	
	resultado = valor1 / valor2;
	
	printf ("Divisao entre %.2f e %.2f = %.2f", valor1, valor2, resultado);
	
	return 0;
}
