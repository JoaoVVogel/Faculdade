#include <stdio.h>
#include <stdlib.h>



int main(){
    int vet1[10], vet2[10], iguais[10], i, j, k = 0, n, duplicado = 0;

    printf("Digite 10 valores para o primeiro vetor:\n");
    
    for(i = 0; i < 10; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &vet1[i]);
        getchar();
    }

    printf("Digite 10 valores para o segundo vetor:\n");

    for(i = 0; i < 10; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &vet2[i]);
        getchar();

    }

    for(i = 0; i < j; i++){
        duplicado = 0;
        for(j = 0; j < 10; j++){
            if(vet1[i] == vet2[j]){
                for (n = 0; n < k; n++) {
                    if (vet1[i] == iguais[n]) {
                        duplicado = 1;
                        break;
                    }

                }

                if(!duplicado){
                    iguais[k] = vet1[i];
                    k++;
                }

            }

        }

    }

    printf("Numeros iguais:\n");
    for(i = 0; i < k; i++){
        printf("%i ", iguais[i]);

    }
    return 0;
}