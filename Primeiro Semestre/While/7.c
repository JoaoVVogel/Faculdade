#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 3, soma = 0;

    do{
        printf("%i\n", x);
        x = x + 3;
        soma = soma + x;

    }while(x < 500);
    printf("A soma desses valores e: %i", soma);
    system("pause");

}