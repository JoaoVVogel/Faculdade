#include<stdio.h>
#include<stdlib.h>

int idade;

int main(){
    printf("Digite sua idade:\n");
    scanf("%i", &idade);

    if(idade==16 || idade==17){
        printf("voto facultativo\n");
        system("pause");

    }else if(idade < 70){
        printf("voto obrigatorio\n");
        system("pause");

    }else(idade > 70);{
        printf("Voto facultativo\n");
        system("pause");

    }

}