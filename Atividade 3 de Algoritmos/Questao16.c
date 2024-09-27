//Nao sei se e exatamente isso, mas fiz como a questao manda.
#include <stdio.h>

int main () {
	
	int total_mercadorias, i;
	float preco_mercadorias, valor_medio, valor_total = 0, soma;
	
	printf ("Total de mercadorias em estoque: ");
	scanf ("%d", &total_mercadorias);
	
	for (i = 0; i < total_mercadorias; i++) {
	
	printf ("Preco unitario da mercadoria %d: ", i+1);
	scanf ("%f", &preco_mercadorias);
	
	valor_total += preco_mercadorias;
	}
	
	valor_medio = valor_total / total_mercadorias;
	
	printf ("Valor total em estoque: %.2f\n", valor_total);
	printf ("Media de valor das mercadorias: %.2f", valor_medio);
	
	return 0;
}
