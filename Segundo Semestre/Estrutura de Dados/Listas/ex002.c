#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node* prox;
};

typedef struct Node Node;
typedef Node* Fila;

Fila criarFila() {
    Fila inicio = NULL;
    return inicio;
}

int estaVazia(Fila inicio) {
    return inicio == NULL;
}

Fila incluirNaFila(Fila inicio, int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        return inicio;
    }

    novo->num = valor;
    novo->prox = NULL;

    if (estaVazia(inicio)) {
        return novo;
    } else {
        Node* atual = inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo;
        return inicio;
    }
}

Fila excluirDaFila(Fila inicio) {
    if (estaVazia(inicio)) {
        printf("Fila vazia. Não é possível remover.\n");
        return inicio;
    }

    Node* temp = inicio;
    inicio = inicio->prox;
    free(temp);
    return inicio;
}

void exibirFila(Fila inicio) {
    if (estaVazia(inicio)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila: ");
    Node* atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Fila inicio = criarFila();
    int op, valor, cont = 0;

    do {
        printf("Escolha a operação:\n");
        printf("1 - Incluir na fila\n");
        printf("2 - Excluir da fila\n");
        printf("3 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite um valor para ser incluído na fila: ");
                scanf("%d", &valor);
                inicio = incluirNaFila(inicio, valor);
                exibirFila(inicio);
                break;
            case 2:
                inicio = excluirDaFila(inicio);
                exibirFila(inicio);
                break;
            case 3:
                cont = 0;
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(cont == 1);

    return 0;
}
