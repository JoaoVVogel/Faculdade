#include<stdio.h>
#include<stdlib.h>

char figura;
float result, raio, lado, base, altura, pi = 3.14;

int main(){
    printf("Escolha uma figura para descobiri qual sua area:\n");
    printf("C - area de um círculo\n");
    printf("R - area de um retangulo\n");
    printf("Q - area do quadrado\n");
    scanf("%s", &figura);
    switch(figura){
        case ('c'):
            printf("Digite o tamanho do raio do circulo:  ");
            scanf("%f", &raio);
            result = pi * (raio * raio);
            printf("\nA area do seu circulo e de: %.2f", result);
            system("pause");

        case('r'):
            printf("Digite o tamano da base e da altura desse retangulo:\n");
            scanf("%f %f", &base, &altura);
            result = base * altura;
            printf("\nA area desse retangulo e de: %.2f", result);
            system("pause");

        case('q'):
            printf("Digite o tamanho do lado do quadrado:  ");
            scanf("%f", &lado);
            result = lado * lado;
            printf("\nA area desse quadrado e de:  %.2f", result);
            system("pause");
    }

}