//Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar
//dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa
//imprime a string sem suas vogais.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int palavra(){

//}

int main(){
    int tamanhoString, i, j;
    char *entrada,
    vogais[6] = {"aeiou"};
    
    printf("Digite o um tamanho para a string: ");
    scanf("%i", &tamanhoString);
    entrada = (char *)malloc((tamanhoString + 1)*sizeof(char));

    printf("Digite sua frase: ");
    fflush(stdin);
    fgets(entrada, tamanhoString + 1, stdin);
    if(entrada == NULL){
        printf("Erro ao receber entrada, tente novamente");
        return 1;
        
    }
    
    fflush(stdin);

    for(i = 0; i < strlen(entrada); i++){
        for (j = 0; j < strlen(vogais); j++){
            if(entrada[i] == vogais[j]){
            entrada[i] = ' ';
            break;
            }

        }

    }
    printf("Frase sem vogais: %s", entrada);

    free(entrada);
    return 0;
}