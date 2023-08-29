#include <stdio.h>
#include <stdlib.h>

struct Node{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *lista;


lista* criarlistta(){
    lista *inicio = (lista*) malloc(sizeof(lista));
    if (inicio != NULL){
        *inicio = NULL;
    }else{
        printf("Erro na alocaçãooo");
    }
    return inicio;
}

int inserenoinicio(lista *inicio){
    node *novo = (node*) malloc(sizeof(node));
    if(novo == NULL){
        printf("Erro na alocação");
        return 0;
    }else{
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = (*inicio);
        *inicio = novo;

    }
}

int inserenofinal(lista *inicio){
    node *novo = (node*)malloc(sizeof(node));
    if(novo == NULL){
        printf("Erro na alocacao");
        return 0;
    }else{
        if((*inicio) == NULL){
            *inicio = novo;
        }else{
            node *temp;
            temp = (*inicio);
            while (temp->prox != NULL){
                temp = temp->prox;
            }
            temp->prox = novo;
            novo->prox = NULL;
        }
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
    }
}

void exibelista(lista*inicio){
    
    if(*inicio == NULL){
        printf("Lista vazia");
    }else{
        node *temp;
        temp = (*inicio);

        while (temp != NULL){
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

void liberar(lista* inicio){
    if ((*inicio) == NULL){
        printf("Lista vazia");
    }else{
        node *temp;
        while ((*inicio) == NULL){
            temp = *inicio;
            *inicio = (*inicio)->prox;
            free(temp);
        }
    }
    
}

void removeinicio(lista* inicio){
    if ((*inicio) != NULL){
        node *temp;
        temp = (*inicio);
        *inicio = temp -> prox;
        free(temp);
        printf("Elemento removio\n");
    }else{
        printf("Lista vazia");
    }
}

void removeFinal(lista* inicio){
    node *antTemp, *temp;
    temp = (*inicio);
    if (((*inicio) != NULL) && (temp -> prox) == NULL){
        *inicio = NULL;
        free(temp);
    }else if((*inicio) != NULL){
        while (temp->prox != NULL){
            antTemp = temp;
            temp = temp->prox;
        }
        antTemp->prox = NULL;
        free(temp);
        printf("Elemento removido\n");
    }else{
        printf("Lista vazia");
    }
    
}

void ordenaLista(lista* inicio){
    
}

int main(){
    lista* inicio = criarlistta();
    int op = 0, cont = 0;
    do{
    printf("O que deseja?\n");
    printf("1 - Inserir inicio\n");
    printf("2 - Inserir final\n");
    printf("3 - Exibir lista\n");
    printf("4 - Liberar lista\n");
    printf("5 - Ordenar lista\n");
    printf("6 - Remover inicio\n");
    printf("7 - Remover final\n");
    printf("0 - Sair\n");
    scanf("%i", &op);
    switch (op){
    case 1:
        inserenoinicio(inicio);
        cont = 1;
        break;
    
    case 2:
        inserenofinal(inicio);
        cont = 1;
        break;

    case 3:
        exibelista(inicio);
        cont = 1;
        break;

    case 4:
        liberar(inicio);
        cont = 1;
        break;

    case 5:
        removeFinal(inicio);
        cont = 1;
        break;

    case 6:
        removeinicio(inicio);
        cont = 1;

    case 7:
        removeFinal(inicio);
        cont = 1;
        break;

    case 0:
        return 0;
        cont = 0;


    default:
        break;
    }
    }while(cont == 1);
    
}
