#include<stdio.h>
#include<stdlib.h>


int main(){
    int n, n2, resultado, potencia(int x, int y);
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    printf("\nDigite outro numero inteiro: ");
    scanf("%i", &n2);
    resultado = potencia(n, n2);
    printf("O resultado e %i", resultado);
    return 0;
}
int potencia(int x, int y){
    int resultado;
    if(y == 0){
        resultado = 1;

    }else {
        resultado = x * potencia(y - 1);
    
    }
    return resultado;
}