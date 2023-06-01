#include<stdio.h>
#include<stdlib.h>

int cont = 0, x, soma = 0;
float media;
int main(){
    printf("Digite 10 numeros:\n");
    while(cont < 10){
        scanf("%i", &x);
        soma += x;
        cont++;
        }
    media = soma / 10;
    printf("A media desses valores e: %.2f", media);
    system("pause");
    

}