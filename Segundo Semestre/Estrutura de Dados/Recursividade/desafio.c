#include<stdio.h>

int calculo(int n){
    if(n == 0){
        return 0;
    }else{
        return n * (n + 1) / 2 + calculo(n - 1);
    }

}

int main(){
    int n, total;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    total = calculo(n);
    printf("O total de bolas de canhao e %i\n", total);
    return 0;

}