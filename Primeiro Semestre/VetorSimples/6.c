#include <stdio.h>

int main() {
    int vet1[10];   // primeiro vetor
    int vet2[10];   // segundo vetor
    int iguais[10];   // vetor de interseção
    int i, j, k;      // variáveis de controle

    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    printf("\nDigite 10 números inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    // Verificar os números que estão em ambos os vetores e preencher o vetor de interseção
    k = 0; // índice do vetor de interseção
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vet1[i] == vet2[j]) {
                // Verificar se o número já está no vetor de interseção
                int duplicado = 0;
                for (int n = 0; n < k; n++) {
                    if (vet1[i] == iguais[n]) {
                        duplicado = 1;
                        break;
                    }
                }
                if (!duplicado) {
                    iguais[k] = vet1[i];
                    k++;
                }
            }
        }
    }

    printf("\nVetor de Interseção:\n");
    if (k == 0) {
        printf("Não há números em comum nos vetores.\n");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", iguais[i]);
        }
        printf("\n");
    }

    return 0;
}
