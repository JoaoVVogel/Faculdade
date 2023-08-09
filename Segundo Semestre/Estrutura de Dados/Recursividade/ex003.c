#include <stdio.h>

#define TAMANHO_MAXIMO 100

int soma(double vet[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        return vet[tamanho - 1] + soma(vet, tamanho - 1);
    }
}

int main() {
    int tamanho, i;
    double vet[TAMANHO_MAXIMO];
    
    printf("Digite um numero inteiro pro tamanho do vetor: ");
    scanf("%i", &tamanho);
    
    if (tamanho <= 0 || tamanho > TAMANHO_MAXIMO) {
        printf("Tamanho do vetor inválido!\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %i do vetor: ", i + 1);
        scanf("%lf", &vet[i]);
    }

    int resultado = soma(vet, tamanho);
    printf("A soma destes valores e %i\n", resultado);

    return 0;
}
