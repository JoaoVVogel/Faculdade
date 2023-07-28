#include<stdio.h>
#include<stdlib.h>

int main(){
    float salario, salario2, aumento;
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if(salario > 0 && salario <= 280){
        aumento = salario * 0.2;
        salario2 = salario + aumento;

    }else if(salario > 280 && salario <= 700){
        aumento = salario * 0.15;
        salario2 = salario + aumento;

    }else if(salario > 700 && salario <= 1500){
        aumento = salario * 0.1;
        salario2 = salario + aumento;

    }else if(salario > 1500){
        aumento = salario * 0.05;
        salario2 = salario + aumento;

    }else{
        printf("Valor inserido é invalido!\n");
        return 0;
    }

    printf("Salario antigo: %.2f\n", salario);
    printf("Aumento: %.2f", aumento);
    printf("Salario atual: %.2f", salario2);
    system("pause");
}