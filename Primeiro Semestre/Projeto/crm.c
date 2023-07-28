#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    struct dados{
        int id;
        char partida[50];
        char destino[50];
        char hora[6];
        float valor;
    }voo[20];
    voo[0].id = 1;
    strcpy(voo[0].partida, "Sao Paulo");
    strcpy(voo[0].destino, "Rio de Janeiro");
    strcpy(voo[0].hora, "11:30");
    voo[0].valor = 1000;

    voo[1].id = 2;
    strcpy(voo[1].partida, "Belo Horizonte");
    strcpy(voo[1].destino, "Salvador");
    strcpy(voo[1].hora, "14:45");
    voo[1].valor = 1500;

    voo[2].id = 3;
    strcpy(voo[2].partida, "Recife");
    strcpy(voo[2].destino, "Fortaleza");
    strcpy(voo[2].hora, "09:20");
    voo[2].valor = 1200;

    voo[3].id = 4;
    strcpy(voo[3].partida, "Porto Alegre");
    strcpy(voo[3].destino, "Curitiba");
    strcpy(voo[3].hora, "08:30");
    voo[3].valor = 800;

    voo[4].id = 5;
    strcpy(voo[4].partida, "Brasília");
    strcpy(voo[4].destino, "Manaus");
    strcpy(voo[4].hora, "13:15");
    voo[4].valor = 1800;

    voo[5].id = 6;
    strcpy(voo[5].partida, "Porto Seguro");
    strcpy(voo[5].destino, "Natal");
    strcpy(voo[5].hora, "10:40");
    voo[5].valor = 1300;

    voo[6].id = 7;
    strcpy(voo[6].partida, "Florianópolis");
    strcpy(voo[6].destino, "Foz do Iguaçu");
    strcpy(voo[6].hora, "15:50");
    voo[6].valor = 900;

    voo[7].id = 8;
    strcpy(voo[7].partida, "São Luís");
    strcpy(voo[7].destino, "Belém");
    strcpy(voo[7].hora, "12:20");
    voo[7].valor = 1100;

    voo[8].id = 9;
    strcpy(voo[8].partida, "Goiânia");
    strcpy(voo[8].destino, "Cuiabá");
    strcpy(voo[8].hora, "14:00");
    voo[8].valor = 950;

    voo[9].id = 10;
    strcpy(voo[9].partida, "João Pessoa");
    strcpy(voo[9].destino, "Maceió");
    strcpy(voo[9].hora, "17:30");
    voo[9].valor = 1200;

   for (int i = 10; i < 20; i++){
    voo[i].id = -1;
    strcpy(voo[i].partida, " ");
    strcpy(voo[i].destino, " ");
    strcpy(voo[i].hora, " ");
    voo[i].valor = 0;

   }

    int idb, i, linha, very = 0;

    char assentos[9][26] = { "| 00 | 01 |   | 02 | 03 |",
                             "| 10 | 11 |   | 12 | 13 |",
                             "| 20 | 21 |   | 22 | 23 |",
                             "| 30 | 31 |   | 32 | 33 |",
                             "| 40 | 41 |   | 42 | 43 |",
                             "| 50 | 51 |   | 52 | 53 |",
                             "| 60 | 61 |   | 62 | 63 |",
                             "| 70 | 71 |   | 72 | 73 |",
                             "| 80 | 81 |   | 82 | 83 |",
                             "| 90 | 91 |   | 92 | 93 |",};

    char nome[40];
    int idade;

    FILE *passagem;

    passagem = fopen("passagem.txt", "w");

    if (passagem == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return;

    }

    printf("----------------------------------------\n");
    printf("|          Emissao de passagem         |\n");
    printf("----------------------------------------\n");
    do{
        printf("Digite o id da passagem para emiti-la");
        scanf("%i", &idb);
        printf("Digite seu nome completo: ");
        gets(nome);
        fflush(stdin);
        printf("Digite sua idade: ");
        scanf("%i", &idade);
        if(0 > idade){
            printf("Idade invalida, tente novamente!");

        }
        for (i = 0; i < 20; i++){
            if(idb == voo[i].id){
                fprintf(passagem, "----------------------------------------\n");
                fprintf(passagem, "|         FLYPIG INTERNATIONAL         |\n");
                fprintf(passagem, "----------------------------------------\n\n");
                fprintf(passagem, "----------------------------------------\n");
                fprintf(passagem, "NOME: %c\n", nome);
                fprintf(passagem, "IDADE: %i\n", idade);
                fprintf(passagem, "----------------------------------------\n\n");
                fprintf(passagem, "-------------------\n");
                fprintf(passagem, "id: %i\n", voo[i].id);
                fprintf(passagem, "Partida: %s\n", voo[i].partida);
                fprintf(passagem, "Destino: %s\n", voo[i].destino);
                fprintf(passagem, "Horario: %s\n", voo[i].hora);
                fprintf(passagem, "Valor: %.2f\n", voo[i].valor);
                fprintf(passagem, "-------------------\n\n");
                fprintf(passagem, "----------------------------------------\n");
                fprintf(passagem, "|           MAPA DE POLTRONAS          |\n");
                fprintf(passagem, "----------------------------------------\n\n");
                for(linha = 0; linha < 9; linha++){
                    fprintf(passagem, "%c\n\n", assentos[linha]);

                }
                fclose(passagem);
                flag = 1;
            }
        }
        if(flag != 1){
            printf("\nId invalido, tente novamente!\n");
            very = 1;

        }

    }while(very != 1);
    
}
