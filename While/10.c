#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m, cont = 0, cont2 = 0;

    printf("Digite a altura do retangulo: ");
    scanf("%i", &n);
    printf("Digite a largura do retangulo: ");
    scanf("%i", &m);
    do{
        while(cont2 < n){
            cont = 0;
            while(cont < m){
                printf("*");
                cont++;
            }
            printf("\n");
            cont2++;
        }
    }while(0 != m || 0 != n);
    printf("0 nao e um valor valido para criacao de uma figura geometrica!");
    return 0;
}