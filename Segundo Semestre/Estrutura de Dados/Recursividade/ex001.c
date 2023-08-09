#include<stdio.h>
#include<stdlib.h>


int main(){
    int n, resultado, soma(int x);
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    resultado = soma(n);
    printf("O resultado e %i", resultado);
    return 0;
}
int soma(int x){
    int resultado;
    if(x == 0){
        resultado = 1;

    }else {
        resultado = x + soma(x - 1);
    
    }
    return resultado;
}