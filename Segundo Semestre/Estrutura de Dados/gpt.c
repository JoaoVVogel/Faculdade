#include <stdio.h>

// Função recursiva para calcular a soma dos elementos de um vetor
float somaVetorRecursivo(float vetor[], int tamanho) {
    // Caso base: vetor vazio (soma é 0)
    if (tamanho == 0)
        return 0;
    
    // Caso recursivo: soma o primeiro elemento com a soma dos demais elementos
    return vetor[tamanho - 1] + somaVetorRecursivo(vetor, tamanho - 1);
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho do vetor inválido!\n");
        return 1; // Retorna 1 para indicar erro
    }

    float vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }

    // Chamada da função recursiva para calcular a soma do vetor
    float resultado = somaVetorRecursivo(vetor, tamanho);

    printf("A soma dos elementos do vetor é: %.2f\n", resultado);
    return 0;
}
