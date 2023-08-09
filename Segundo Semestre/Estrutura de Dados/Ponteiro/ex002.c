//Escreva um programa que contenha duas variáveis inteiras. Compare o endereço de
//ambas e exiba o maior.
#include<stdio.h>

int main(){
    int x, y;
    
    int *ptrX;
    ptrX = &x;
    int *ptrY;
    ptrY = &y;

    if(ptrX > ptrY){
        printf("Maior endereco x: %i", ptrX);

    }else {
        printf("Maior endereco y: %i", ptrY);
    
    }


}