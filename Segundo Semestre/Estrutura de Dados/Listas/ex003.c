#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node* prox;
};

typedef struct Node Node;
typedef Node* Pilha;

Pilha criarPilha() {
    Pilha topo = NULL;
    return topo;
}

int estaVazia(Pilha topo) {
    return topo == NULL;
}

Pilha incluirNaPilha(Pilha topo, int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        return topo;
    }

    novo->num = valor;
    novo->prox = topo;
    topo = novo;
    return topo;
}

Pilha excluirDaPilha(Pilha topo) {
    if (estaVazia(topo)) {
        printf("Pilha vazia. Não é possível remover.\n");
        return topo;
    }

    Node* temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

void exibirPilha(Pilha topo) {
    if (estaVazia(topo)) {
        printf("Pilha vazia.\n");
        return;
    }

    printf("Pilha: ");
    Node* atual = topo;
    while (atual != NULL) {
        printf("%d ", atual->num);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Pilha topo = criarPilha();
    int op, valor, cont = 0;

    do {
        printf("Escolha a operação:\n");
        printf("1 - Incluir na pilha\n");
        printf("2 - Excluir da pilha\n");
        printf("3 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite um valor para a pilha: ");
                scanf("%d", &valor);
                topo = incluirNaPilha(topo, valor);
                exibirPilha(topo);
                cont = 1;
                break;
            case 2:
                topo = excluirDaPilha(topo);
                exibirPilha(topo);
                cont = 1;
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
