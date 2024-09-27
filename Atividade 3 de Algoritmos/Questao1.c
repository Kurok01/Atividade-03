#include <stdio.h>

int main () {
	
	float valor1, valor2, resultado;
		
	printf ("Digite um valor: ");
	scanf ("%f", &valor1);
	
	printf ("Digite outro valor: ");
	scanf ("%f", &valor2);
	
	while (valor2 == 0) {
			
		printf ("Digite outro valor, diferente de 0: ");
		scanf ("%f", &valor2);	
	}
		
	resultado = valor1 / valor2;
		
	printf ("Divisao entre os valores %.2f / %.2f = %.2f", valor1, valor2, resultado);		
	
	return 0;
}
