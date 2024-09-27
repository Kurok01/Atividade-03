#include <stdio.h>

int main() {

    float nota1a, nota2a, media;
    
    printf("Digite a nota 1a: ");
    scanf("%f", &nota1a);
    
    while (nota1a > 10 || nota1a < 0) {
        printf("Digite um valor válido para a nota 1a: ");
        scanf("%f", &nota1a);
    }

    printf("Digite a nota 2a: ");
    scanf("%f", &nota2a);

    while (nota2a > 10 || nota2a < 0) {
        printf("Digite um valor valido para a nota 2a: ");
        scanf("%f", &nota2a);
    }

    media = (nota1a + nota2a) / 2;
    
    printf("A média do aluno e: %.2f\n", media);
    
    return 0;
}

