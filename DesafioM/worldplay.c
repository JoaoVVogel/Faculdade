#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char matr[5][42] = {"|   |   |   |   |   |   |   |   | * | * |", 
                        "|   |   |   |   |   |   |   |   | * | * |", 
                        "|   |   |   |   | * | * | * | * | * | * |", 
                        "|   |   |   |   |   |   |   |   |   |   |", 
                        "|   |   |   |   |   |   | * | * | * | * |"};

    char gabarito[5][42] = {"| h | a | r | d | w | a | r | e | * | * |", 
                            "| s | o | f | t | w | a | r | e | * | * |", 
                            "| b | y | t | e | * | * | * | * | * | * |", 
                            "| c | o | m | p | i | l | a | d | o | r |", 
                            "| c | o | d | i | g | o | * | * | * | * |"};
    char tentativa[11];

    char resposta[5][11] = {"hardware", "software", "byte", "compilador", "codigo"};

    int tent1 = 0, tent2 = 0, tent3 = 0, tent4 = 0, tent5 = 0, repet = 0, certas = 0, pergunta, i, repet2 = 0;

    do{
        printf("----------World Play----------\n\n");
        for (i = 0; i < 5; i++){
            printf("%s\n\n", matr[i]);
        }
        printf("1 - Componentes fisicos de um computador\n");
        printf("2 - Parte logica que controla o funcionamento de um computador\n");
        printf("3 - Ele e composto por 8 bits\n");
        printf("4 - Ele transforama seu codigo em linguagem de maquina e o executa\n");
        printf("5 - Ele compoe tudo relacionado a software\n");
        printf("Escolha qual quer responder: \n");
        scanf("%i", &pergunta);
        do{
            switch (pergunta){

            case 1:
                printf("Voce selecionou a primeira pergunta, qual sua tentativa?\n");
                gets(tentativa);
                fflush(stdin);
                if(tent1 != 2){
                    if (!strcmp(resposta[0], tentativa)){
                        printf("Certa resposta!\n");
                        matr[0][2] = 'h';
                        matr[0][6] = 'a';
                        matr[0][10] = 'r';
                        matr[0][14] = 'd';
                        matr[0][18] = 'w';
                        matr[0][22] = 'a';
                        matr[0][26] = 'r';
                        matr[0][30] = 'e';
                        repet = 1;
                        repet2 = 1;
                        certas++;

                    }else{
                        if(tent1 < 2){
                            printf("Resposta errada!\n");
                            tent1++;
                            repet2 = 0;

                        }else if (tent1 == 2){
                            printf("Chances esgotadas para esta pergunta!\n");
                            repet = 1;
                            repet2 = 1;

                        }
                        
                    }
                
                }else{
                    printf("Pergunta ja feita, escolha outra...\n");
                    repet = 1;
                    repet2 = 1;

                }
                break;
            
                    case 2:
                printf("Voce selecionou a segunda pergunta, qual sua tentativa?\n");
                gets(tentativa);
                fflush(stdin);
                if(tent2 <= 2){
                    if(!strcmp(resposta[1], tentativa)){
                        printf("Certa resposta!\n");
                        matr[1][2] = 's';
                        matr[1][6] = 'o';
                        matr[1][10] = 'f';
                        matr[1][14] = 't';
                        matr[1][18] = 'w';
                        matr[1][22] = 'a';
                        matr[1][26] = 'r';
                        matr[1][30] = 'e';
                        repet = 2;
                        certas++;
                        repet2 = 1;


                    }else{
                        if(tent2 < 2){
                            printf("Resposta errada!\n");
                            tent2++;
                            repet2 = 0;

                        }else if (tent2 == 2){
                            printf("Chances esgotadas para esta pergunta!\n");
                            repet = 2;
                            repet2 = 1;
                        }
                        
                    }
                
                }else{
                    printf("Pergunta ja feita, escolha outra...\n");
                    repet = 2;
                    repet2 = 1;

                }
                break;

                    case 3:
                printf("Voce selecionou a terceira pergunta, qual sua tentativa?\n");
                gets(tentativa);
                fflush(stdin);
                if(tent3 <= 2){
                    if(!strcmp(resposta[2], tentativa)){
                        printf("Certa resposta!\n");
                        matr[2][2] = 'b';
                        matr[2][6] = 'y';
                        matr[2][10] = 't';
                        matr[2][14] = 'e';
                        repet = 2;
                        certas++;
                        repet2 = 1;

                    }else{
                        if(tent3 < 2){
                            printf("Resposta errada!\n");
                            tent3++;
                            repet2 = 0;

                        }else if (tent3 == 2){
                            printf("Chances esgotadas para esta pergunta!\n");
                            repet = 2;
                            repet2 = 1;
                        }
                        
                    }
                
                }else{
                    printf("Pergunta ja feita, escolha outra...\n");
                    repet = 2;

                }
                break;   

                    case 4:
                printf("Voce selecionou a segunda pergunta, qual sua tentativa?\n");
                gets(tentativa);
                fflush(stdin);
                if(tent4 <= 2){
                    if(!strcmp(resposta[3], tentativa)){
                        printf("Certa resposta!\n");
                        matr[3][2] = 'c';
                        matr[3][6] = 'o';
                        matr[3][10] = 'm';
                        matr[3][14] = 'p';
                        matr[3][18] = 'i';
                        matr[3][22] = 'l';
                        matr[3][26] = 'a';
                        matr[3][30] = 'd';
                        matr[3][34] = 'o';
                        matr[3][38] = 'r';
                        repet = 2;
                        repet2 = 1;
                        certas++;

                    }else{
                        if(tent4 < 2){
                            printf("Resposta errada!\n");
                            tent4++;
                            repet2 = 0;

                        }else if (tent4 == 2){
                            printf("Chances esgotadas para esta pergunta!\n");
                            repet = 2;
                            repet2 = 1;
                        }
                        
                    }
                
                }else{
                    printf("Pergunta ja feita, escolha outra...\n");
                    repet = 2;

                }
                break;
            
                    case 5:
                printf("Voce selecionou a segunda pergunta, qual sua tentativa?\n");
                gets(tentativa);
                fflush(stdin);
                if(tent5 <= 2){
                    if(!strcmp(resposta[4], tentativa)){
                        printf("Certa resposta!\n");
                        matr[0][2] = 's';
                        matr[0][6] = 'o';
                        matr[0][10] = 'f';
                        matr[0][14] = 't';
                        matr[0][18] = 'w';
                        matr[0][22] = 'a';
                        matr[0][26] = 'r';
                        matr[0][30] = 'e';
                        repet = 2;
                        repet2 = 1;
                        certas++;

                    }else{
                        if(tent5 < 2){
                            printf("Resposta errada!\n");
                            tent5++;
                            repet2 = 0;

                        }else if (tent5 == 2){
                            printf("Chances esgotadas para esta pergunta!\n");
                            repet = 2;
                            repet2 = 1;
                        }
                        
                    }
                
                }else{
                    printf("Pergunta ja feita, escolha outra...\n");
                    repet = 2;

                }
                break;

                default:
                printf("Numero de pergunta invalido, tente novamente!\n");
                repet2 = 0;
                break;

            }

        }while(repet2 != 1);    
    }while (repet <= 5);
        printf("Voce acertou %i perguntas!\n", certas);
        for ( i = 0; i < 5; i++){
            printf("%s\n", matr[i]);

        }
        if(certas == 5){
            printf("Parabens voce acertou todas :)\n");
            
        }

        printf("Correção: \n");
        
        for ( i = 0; i < 5; i++){
            printf("%s", gabarito[i]);
        }
        printf("Obrigado por jogar!!");
        system("pause");
        

}