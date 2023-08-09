//Crie um programa que contenha uma função que permita passar por parâmetro dois
//números inteiros A e B. A função deverá calcular a soma entre estes dois números e
//armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
//modificar o valor do primeiro parâmetro. Imprima os valores atualizados de A e B na
//função principal.
#include<stdio.h>

int soma(int *a, int b){
    *a = *a + b;

}

int main(){
    int nA, nB;
    printf("Digite um valor para x: ");
    scanf("%i", &nA);
    printf("Digite um valor para y: ");
    scanf("%i", &nB);
    soma(&nA, nB);
    printf("Soma: %i", nA);

}