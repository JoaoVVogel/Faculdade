#include<stdio.h>
#include<stdlib.h>

int main(){
    float m, h, mediaM, mediaH, soma = 0;
    int cont = 0, opc;

    printf("Escolha de qual genero que fazer uma media de alturas:\n");
    printf("[1]Homem\n");
    printf("[2]Mulher\n");
    scanf("%i", &opc);
    switch(opc){
    case 1:
        printf("Voce selecionou homem!\n");
        do{
            printf("Digite a altura do homem %i: ", cont + 1);
            scanf("%f", &h);
            soma = h + soma;
            cont++;
        }while(cont < 10);
        mediaH = soma / 10;
        printf("A media de altura dos homens e: %.2f", mediaH);
        break;
    
    case 2:
        printf("Voce selecionou mulher!\n");
        do{
            printf("Digite a altura da mulher %i: ", cont + 1);
            scanf("%f", &m);
            soma = m + soma;
            cont++;
        }while(cont < 10);
        mediaM = soma / 10;
        printf("A media de altura dos homens e: %.2f", mediaM);
        break;

    default:
        printf("Opção invalida!");
        break;
    }
    system("pause");
}