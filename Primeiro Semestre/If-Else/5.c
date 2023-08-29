#include<stdio.h>
#include<math.h>

int main(){
    int n = 0;
    float resultado = 0;
    printf("Digite um numero para saber se ele e par ou impar: ");
    scanf("%i", &n);

    if(n % 2 == 0){
        resultado = sqrt(n);
        printf("O numero e par, sua raiz e: %.2f", resultado);

    }else{
        resultado = n / 2;
        printf("O numero e impar, sua metade e: %.2f", resultado);
    }



}