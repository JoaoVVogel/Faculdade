//Faça um programa que leia um número N e:
//Crie dinamicamente e leia um vetor de inteiro de N posições;
//Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n, escolha, *vet, *multiplos, x, cont = 0, i = 0, j = 0;

    printf("Digite um numero de posicoes pro vetor: ");
    scanf("%i", &n);

    vet = malloc(n * sizeof(int));
    multiplos = malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &vet[i]);

    }
     printf("Digite um numero para saber se ele tem multiplos no vetor: ");
     scanf("%i", &x);

     for(i = 0; i < n; i++){
        if(vet[i] % x == 0){
            multiplos[j] = vet[i];
            j++;
            cont++;

        }

     }
     printf("Seu numero tem %i multiplos na funcao\n Deseja saber quais numeros sao?\n1 - Sim ou 2 - Nao\n", cont);
     scanf("%i", &escolha);
     if(escolha == 1){
        printf("Multiplos de %i sao: ", x);
        for(i = 0; i < j; i++){
            printf("%i ", multiplos[i]);

        }
    }else {
        printf("Adeus...");
        return 0;
    }


}