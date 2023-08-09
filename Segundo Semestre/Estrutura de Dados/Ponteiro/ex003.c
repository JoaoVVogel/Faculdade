//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
#include<stdio.h>

int main(){
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%i", &x);
    printf("Digite um valor para y: ");
    scanf("%i", &x);

    int *ptrX;
    ptrX = &x;
    int *ptrY;
    ptrY = &y;

    if(ptrX > ptrY){
        printf("Valor do maior endereco x: %i", x);

    }else {
        printf("Valor do maior endereco y: %i", y);
    
    }

}