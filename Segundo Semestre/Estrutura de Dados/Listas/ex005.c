#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node {
    int num;
    struct Node* prox;
};

typedef struct Node Node;
typedef Node* Lista;


int numeroPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}


int contarPrimos(Lista inicio) {
    int contador = 0;
    Node* atual = inicio;

    while (atual != NULL) {
        if (numeroPrimo(atual->num)) {
            contador++;
        }
        atual = atual->prox;
    }

    return contador;
}

Lista inserirNoInicio(Lista inicio, int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        return inicio;
    }

    novo->num = valor;
    novo->prox = inicio;
    inicio = novo;

    return inicio;
}

void exibeLista(Lista inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista: ");
    Node* atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Lista inicio = NULL;
    int n, valor;

    printf("Quantos elementos deseja inserir na lista? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &valor);
        inicio = inserirNoInicio(inicio, valor);
    }

    int contadorPrimos = contarPrimos(inicio);

    printf("Número de nós com números primos: %d\n", contadorPrimos);

    while (inicio != NULL) {
        Node* temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    return 0;
}
