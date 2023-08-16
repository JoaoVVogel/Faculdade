#include<stdio.h>
#include<stdlib.h>

struct produto{
    int codigo;
    char nome[20];
    int qtda;
    float valor;
};

int main(){
    int i = 0, n = 1;
    char op;
    struct produto *prod;

    prod = (struct produto*) malloc(n*sizeof(struct produto));
    do{
        
        printf("Informe produto\nCodigo: ");
        scanf("%i", &prod[i].codigo);
        printf("Nome: ");
        fflush(stdin);
        gets(prod[i].nome);
        fflush(stdin);
        printf("Quantidade: ");
        scanf("%i", &prod[i].qtda);
        printf("Valor: ");
        scanf("%f", &prod[i].valor);

        printf("Produto\nCodigo: %i\n", prod[i].codigo);
        printf("Nome: %c\n", prod[i].nome);
        printf("Quantidade: %i\n", prod[i].qtda);
        printf("Valor: %f\n", prod[i].valor);
        
        printf("Deseja inserir mais produtos s/n\n");
        scanf("%c", &op);
        if(op == 's' || op == 'S'){
            n++;
            i++;
            prod = (struct produto*) realloc(prod, n*sizeof(struct produto));
        }
    }while(op == 's' || op == 'S');

    free(prod);

}