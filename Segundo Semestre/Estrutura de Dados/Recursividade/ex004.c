#include<stdio.h>
#include<stdlib.h>

int multiplicacao(int x, int y){
    int resultado;
    if(y == 0){
        resultado = 0;

    }else {
        resultado = x + multiplicacao(x, y - 1);
    
    }
    return resultado;
}

int main(){
    int n, n2, resultado, multiplicacao(int x, int y);
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    printf("\nDigite outro numero inteiro para multiplicar: ");
    scanf("%i", &n2);
    resultado = multiplicacao(n, n2);
    printf("O resultado e %i", resultado);
    return 0;
}
