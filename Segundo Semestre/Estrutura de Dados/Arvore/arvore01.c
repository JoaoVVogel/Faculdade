#include<stdio.h>
#include<stdlib.h>

struct No{
    int num;
    struct No *esq;
    struct No *dir;

};

typedef struct NO no;
typedef no *ArvBin;

ArvBin* criarArvBin(){
    ArvBin *raiz =(ArvBin*) malloc (sizeof(ArvBin));
    if(raiz != NULL){
        *raiz=NULL;

    }else{
        printf("Erro na alocacao...\n");
        exit(0);

    }
    return raiz;

}

int insere_ArvBin(ArvBin* raiz){
    no *novo=(no *) malloc(sizeof(no));
    if(novo == NULL){
        printf("Sem memoria disponivel!\n");
        exit(0);

    }
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if(*raiz == NULL){
        *raiz = novo;

    }else{
        no *atual = *raiz;
        no *ant = NULL;
        while(atual != NULL){
            ant = atual;
            if(novo->num == atual->num){
                printf("Elemento ja existe...");
                free(novo);
                return 0;
            }
            if(novo->num > atual->num){
                atual = atual->dir;

            }else{
                atual = atual->esq;
            }
        }
        if(novo->num > ant->num){
            ant->dir = novo;

        }else{
            ant->esq = novo;
        }
    }
}
