#include <stdio.h>

int main() {
    int numero, multiplicador;

    printf("Digite um numero para exibir sua tabuada: ");
    scanf("%d", &numero);

    multiplicador = 1;
    while (multiplicador <= 10) {
        printf("%i x %i = %i\n", numero, multiplicador, numero * multiplicador);
        multiplicador++;
    }

    system("pause");
}
