#include <stdio.h>
#include <stdlib.h>



int main(){
    int vet[10], impar[10], i, j = 0;
    printf("Digite 10 valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%i", &vet[i]);
        getchar();
        if(vet[i] % 2 != 0){
            impar[j] = vet[i];
            j++;
        }

    }
    
    for (i = 0; i < 10; i++) {
        printf("%i  ", vet[i]);
    
    }

    printf("Impares:\n");
    
    for (i = 0; i < j; i++){
        printf("%i  ", impar[i]);
    }
    

}