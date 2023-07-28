#include<stdio.h>
#include<stdlib.h>

int i, vet[i];

int main(){
    int n, resultado, soma(int x);
    printf("Digite um numero inteiro pro tamanho do vetor: ");
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        printf("Digite o valor %i do vetor: ", i);
        scanf("%i", vet[i]);
    }
    
    resultado = soma(vet[n]);
    printf("O fatorial e %i", resultado);
    return 0;
}
int soma(int x){
    int resultado, j, k;
    for (k = 0; k < vet[i]; k++){
        for (j = 0; j < k; j++){
            if(x == 0){
            resultado = 1;

            }else {
            resultado = vet[k] + soma(x - vet[k]);
        
            }

        }

    }
    return resultado;
}