#include<stdio.h>
#include<stdlib.h>

int main(){
    int base, x, cont, cont2 = 0;
    printf("Digite um valor para ser a base do triangulo: ");
    scanf("%i", &base);
    x = base;
    do{
        while(base > cont){
            while(x > cont2){
                printf("*");
                cont2++;
            }
            printf("\n");
            cont2 = 0;
            x = x - 1;
            cont++;

        }
        base = base - 1;
        cont = 0;
        cont2 = 0;

    }while (x != 0);
    printf("Fim!");
    return 0;
    
}