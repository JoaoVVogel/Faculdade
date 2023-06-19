#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, soma = 0, cont = 0;
    do{
        printf("Digite um valor: ");
        scanf("%i", &x);

        if(x > 0){
            soma = soma + x;
        }else if(0 > x){
            cont++;
        }
    }while(x != 0);
    printf("A soma dos positivos e: %i\n", soma);
    printf("A quantidade de negativos e: %i\n", cont);
    system("pause");
}