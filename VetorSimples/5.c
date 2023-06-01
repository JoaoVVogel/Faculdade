#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10], b[10], c[10], i;

    printf("Digite 10 valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%i", &a[i]);
        getchar(); // Limpa o buffer de entrada
    }
    printf("Agora digite 10 valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%i", &b[i]);
        getchar(); // Limpa o buffer de entrada
    }
    for (i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            c[i] = 1;
        } else if (a[i] == b[i]) {
            c[i] = 0;
        } else if (a[i] < b[i]) {
            c[i] = -1;
        }

        printf("%i  ", c[i]);
    }

    system("pause");
    return 0;
}
