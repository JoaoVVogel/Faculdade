#include<stdio.h>

int main(){
    int idade = 0;
    float peso = 0;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(idade > 17 && idade < 67){
        if(peso > 50){
            printf("Voce pode doar sangue!");
        }else{
            printf("Você não pode doar sangue.");
        }

    }else{
        printf("Você não pode doar sangue.");
    }
    return 0;
}