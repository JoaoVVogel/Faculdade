#include<stdio.h>
#include<stdlib.h>

float renda, imposto;
int cont;
int main(){
    printf("Inposto de renda\n");
    while(cont >= 0){
        printf("\nInforme sua renda mensal\n");
        scanf("%f", &renda);
        
        if(renda <= 1637.11){
            printf("Voce esta insento do imposto de renda\n");
            cont++;

        }else if(renda > 1637.11 && renda < 2453.50){
            imposto = renda * 0.075;
            printf("Voce deve pagar %.2f de imposto\n", imposto);
            cont++;

        }else if(renda > 2453.51 && renda < 3271.38){
            imposto = renda * 0.15;
            printf("Voce deve pagar %.2f de imposto\n", imposto);
            cont++;

        }else if(renda > 3271.39 && renda < 4087.65){
            imposto = renda * 0.225;
            printf("Voce deve pagar %.2f de imposto\n", imposto);
            cont++;

        }else{
            imposto = renda * 0.275;
            printf("Voce deve pagar %.2f de imposto\n", imposto);
            cont++;
        }
    
    }

}