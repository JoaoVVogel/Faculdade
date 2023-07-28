#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int conta, op, op2, x1, x2;
float saldo, n;
char nome[30];

int main(){
    printf("----BANCO----");
    printf("\nDigite o numero da conta:\n");
    scanf("%i", &conta);
    fflush(stdin);
    printf("\nDigite seu nome:\n");
    gets(nome);
    srand(time(NULL));
    saldo = rand() % 10000;
    do{
        do{
            printf("%s %i seu saldo atual e: %.2f ", nome, conta, saldo);
            printf("Escolha q tipo de operacao quer fazer:\n");
            printf("1 - Deposito\n");
            printf("2 - Saque\n");
            printf("3 - Sair\n");
            fflush(stdin);
            scanf("%i", &op);
            switch (op){
            case 1:
                    printf("Escolha a quantia que quer depositar:\n");
                    scanf("%f", &n);
                    saldo = saldo = n;
                    printf("Voce depositou %.2f\n", n);
                    x1 = 1;
                    break;

                case 2:
                    printf("Escolha a quantia que quer sacar:\n");
                    scanf("%f", &n);
                    if(n > saldo){
                        printf("Valor maior que o de sua conta!\n");
                        printf("Escolha a quantia que quer sacar:\n");
                        scanf("%f", &n);
                        saldo = saldo - n;
                        x1 = 1;
                        break;

                    }else{
                        saldo = saldo - n;
                        x1 = 1;
                    }
                    break;

                case 3:
                    printf("Ate mais, muito obrigado pela preferencia");
                    cont++;
                    system("pause");
                    break;

            }

        }while (x1 !=0);
            printf("%s %i seu saldo atual e: %.2f ", nome, conta, saldo);
        do{
            printf("Deseja realizar mais alguma operacao?\n");
            printf("1 - sim\n");
            printf("2 - nao\n");
            scanf("%i", &op2);
            switch (op2)
            {
            case 1:
                x1 = 0;
                x2 = 1;
                break;
            
            default:
                printf("Opcao invalida!");
                break;
            }
        }
    }while
    
}