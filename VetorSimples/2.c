#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>


int main(){
    int i, soma = 0, vet[5];
    printf("Digite 5 valores para serem somados:\n");
    for(i=0;i<5;i++){
        scanf("%i", &vet[i]);
        soma = soma + vet[i];

    }
    printf("A soma dele e: %i\n", soma);
    system("pause");

}