#include<stdio.h>
#include<stdlib.h>

#include "filmes.h"
#include "excluir.h"
#include "cadastrar.h"
#include "visualizar.h"
#include "atualizar.h"

int main(){
    int op, menuLoop = 0;
    do{
        printf("O que deseja realizar:\n");
        printf("1 - Cadastrar filme\n");
        printf("2 - Vizualizar filmes\n");
        printf("3 - Atualizar filme\n");
        printf("4 - Excluir filme\n");
        printf("0 - Sair");

        switch (op)
        {
        case 1:
            cadastrar();
            
            break;

        case 2:
            vizualizar();
            break;

        case 3:
            atualizar();
            break;

        case 4:
            excluir();
            break;
        
        case 0:
            return 0;
        
        default:
            break;
        }
    }while(menuLoop == 0);
}