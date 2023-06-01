#include<stdio.h>
#include<stdlib.h>

int x, y, produto;
char op;

int main(){
    printf("----CALCULADORA EM C----\n");
    printf("Escolha qual tipo de operação quer fazer( + ou - ): ");
    scanf("%c", &op);
    switch(op){
        case '+':
            printf("\nQuais valores voce quer somar?\n");
            scanf("%i %i", &x, &y);
            produto = x + y;
            printf("O resultado de %i + %i e %i\n", x, y, produto);
            break;

        case '-':
            printf("\nQuais valores voce quer subtrair?\n");
            scanf("%i %i", &x, &y);
            produto = x - y;
            printf("O resultado de %i - %i e %i\n", x, y, produto);
            break;
            
    }

}