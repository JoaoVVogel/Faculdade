#include<stdio.h>
#include<stdlib.h>

int main(){
    int *numeros;
    int n, i;

    printf("Quantidade de numeros: ");
    scanf("%i", &n);

    numeros = malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
        
    }
    
    printf("Numeros inseridos:\n");
    for(i = 0; i < n; i++){
        printf("%i", numeros[i]);
        printf("\n");

    }

}