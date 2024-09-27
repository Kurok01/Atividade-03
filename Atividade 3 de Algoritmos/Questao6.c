#include <stdio.h>

int main () {
	
	float nota1a, nota2a, media;
	char novo_calculo = 'S';
	
	while (novo_calculo == 'S') {
		
		printf ("Digite a nota 1a: ");
		scanf ("%f", &nota1a);
		
		while (nota1a > 10 || nota1a < 0) {
			
			printf ("Digite um valor valido para a nota 1a: ");
			scanf ("%f", &nota1a);
		}
		
		printf ("Digite a nota 2a: ");
		scanf ("%f", &nota2a);
		
		while (nota2a > 10 || nota2a < 0) {
			
			printf ("Digite um valor valido para a nota 2a: ");
			scanf ("%f", &nota2a);
		}
		
		media = (nota1a + nota2a) / 2;
		
		printf ("A media do aluno e: %.2f\n\n", media);
		
		printf ("Realizar novo calculo? (S/N) ");
		scanf (" %c", &novo_calculo);
		
		if (novo_calculo == 's') {
			
			novo_calculo = 'S';
			
		}
	}
	
	return 0;
}
