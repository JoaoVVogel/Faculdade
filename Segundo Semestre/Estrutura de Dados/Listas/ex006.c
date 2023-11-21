#include <stdio.h>
#include <stdlib.h>

struct lista {
    float info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* criarNo(float valor) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    if (novo == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    novo->info = valor;
    novo->prox = NULL;
    return novo;
}


Lista* removerNos(Lista* inicio, int n) {
    if (inicio == NULL || n <= 0) {
        return NULL; 
    }

    Lista* atual = inicio;
    Lista* anterior = NULL;

    while (atual != NULL && n > 0) {
        Lista* temp = atual;
        atual = atual->prox;
        free(temp);
        n--;
    }

    return atual; 
}


void imprimirLista(Lista* inicio) {
    Lista* atual = inicio;
    while (atual != NULL) {
        printf("%.2f ", atual->info);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Lista* inicio = NULL;
    int n;
    float valor;

    printf("Quantos elementos deseja inserir na lista? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &valor);
        Lista* novoNo = criarNo(valor);
        novoNo->prox = inicio;
        inicio = novoNo;
    }

    printf("Digite o número de nós a serem removidos: ");
    scanf("%d", &n);

    inicio = removerNos(inicio, n);

    printf("Lista após a remoção dos %d primeiros nós: ", n);
    imprimirLista(inicio);


    while (inicio != NULL) {
        Lista* temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    return 0;
}
