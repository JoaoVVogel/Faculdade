#include<stdio.h>
#include<stdlib.h>

int x;
int main(){
    do{
        printf("\nEscreva um numero: ");
        scanf("%i", &x);
        

    }while(x >= 0);
    printf("Numero negativo encontrtado, sistema encerrado...\n");
    system("pause");

}