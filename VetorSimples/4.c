#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>


int main(){
    int vet1[5], vet2[5], vetSoma[5], i;
    printf("Digite 5 valores para o primeiro vetor\n");
    for(i=0;i<5;i++){
        scanf("%i", &vet1[i]);

    }
    printf("Agora digite 5 valores para o segundo vetor\n");
    for(i = 0;i<5;i++){
        scanf("%i", &vet2[i]);
        vetSoma[i] = vet1[i] + vet2[i];
    }
    printf("O vetor da soma e:\n");
    for(i=0;i<5;i++){
        printf("%i  ", vetSoma[i]);
    }

    system("pause");

}