#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 50

void inicio(char **nomes, int n){
    int i;
    char entrada[SIZE];
    int size;

    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("Nome %i: ", i + 1);
        gets(entrada);
        size = strlen(entrada);
        nomes[i] = malloc( (size+1)*sizeof(char) );
        strcpy(nomes[i], entrada);

    }

}

void escreve(char **nomes, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%s\n", nomes[i]);
    }

}

int main(){
    char **nomes;
    int n, i, size;

    printf("Quantidade de strings: ");
    scanf("%i", &n);

    nomes = malloc(n*sizeof(char*));

    inicio(nomes, n);

    escreve(nomes, n);

    for(i = 0; i < n; i++){
        free(nomes[i]);

    }
    free(nomes);

}