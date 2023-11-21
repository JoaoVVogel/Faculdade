#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node* prox;
};

typedef struct Node node;
typedef node* lista;

lista* criarlista() {
    lista* inicio = (lista*)malloc(sizeof(lista));
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na alocação");
    }
    return inicio;
}

int insereNoInicio(lista* inicio) {
    node* novo = (node*)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação");
        return 0;
    } else {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = (*inicio);
        *inicio = novo;
        return 1;
    }
}

void removeElemento(lista* inicio) {
    if ((*inicio) == NULL) {
        printf("Não há nada para remover...\n");
        return;
    }

    int n;
    node* temp = (*inicio);
    node* antTemp = NULL;
    printf("Digite qual valor deseja remover da lista: ");
    scanf("%i", &n);

    while (temp != NULL) {
        if (temp->num == n) {
            if (antTemp == NULL) {
                *inicio = temp->prox;
            } else {
                antTemp->prox = temp->prox;
            }
            free(temp);
            printf("Elemento removido\n");
            return;
        }
        antTemp = temp;
        temp = temp->prox;
    }
    printf("Elemento não encontrado na lista\n");
}

void exibelista(lista* inicio) {
    if (*inicio == NULL) {
        printf("Lista vazia\n");
    } else {
        node* temp;
        temp = (*inicio);

        while (temp != NULL) {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

int main() {
    lista* inicio = criarlista();
    int op, cont = 0;

    do {
        printf("Escolha a operação:\n");
        printf("1 - Inserir na lista\n");
        printf("2 - Remover elemento da lista\n");
        printf("3 - Imprimir lista\n");
        printf("4 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                cont = insereNoInicio(inicio);
                break;
            case 2:
                removeElemento(inicio);
                break;
            case 3:
                exibelista(inicio);
                break;
            case 4:
                cont = 0;
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (cont == 1);

   
    while (*inicio != NULL) {
        node* temp = *inicio;
        *inicio = (*inicio)->prox;
        free(temp);
    }

    free(inicio); 

    return 0;
}
