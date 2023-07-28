#include<stdio.h>

int n;

int main(){
    printf("Escreva um valor e descubra se ele é negativo ou positivo...\n");
    scanf("%i", &n);

    if(n < 0){
        printf("O valor %i e negativo", n);
        system ("pause");

    }else{
        printf("O valor %i e positivo", n);
        system ("pause");
    }

}