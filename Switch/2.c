#include<stdio.h>
#include<stdlib.h>

int lados;

int main(){
    printf("Digite um numero de lados e eu vou dizer qual figura se encaixa\n");
    scanf("%i", &lados);
    switch(lados){
        case 3:
            printf("\nTriangulo");
            system("pause");

        case 4:
            printf("\nQuadrilatero");
            system("pause");

        case 5:
            printf("\nPentagono");
            system("pause");

        case 6:
            printf("\nHexagono");
            system("pause");

    }

}