//Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
//memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são
//ímpares.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, pares = 0, impares = 0;
    int *numeros;

    printf("Quantos numero quer digitar: ");
    scanf("%i", &n);

    numeros = malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);

        if(numeros[i] % 2 == 0){
            pares++;

        }else {
            impares++;

        }

    }

    printf("dos %i numeros que voce digitou %i sao pares e %i sao impares", n, pares, impares);
    return 0;

}