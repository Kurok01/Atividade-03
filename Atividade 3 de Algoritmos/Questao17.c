//Nao sei se e exatamente isso, mas fiz como a questao manda.
#include <stdio.h>

int main () {
	
	int total_mercadorias = 0;
	float preco_mercadorias, valor_medio, valor_total = 0;
	char mais_mercadorias = 'S';
	
	while (mais_mercadorias == 'S' || mais_mercadorias == 's') {
		
		printf ("Valor da mercadoria: ");
		scanf("%f", &preco_mercadorias);
		
		valor_total += preco_mercadorias;
		
		total_mercadorias++;
		
		printf ("Mais Mercadorias? (S/N) ");
		scanf (" %c", &mais_mercadorias);
	}
	
	valor_medio = valor_total / total_mercadorias;
	
	printf ("Valor total em estoque: %.2f\n", valor_total);
	printf ("Media de valor das mercadorias: %.2f", valor_medio);
	
	return 0;
}
