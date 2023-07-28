#include<stdio.h>
#include<stdlib.h>

int cont = 0, x, maior;
int main(){
    printf("Digite 10 numeros:\n");
    scanf("%i", &maior);

    while(cont < 9){
        scanf("%i", &x);
        cont++;

        if(x > maior){
            maior = x;
        }

    }
    printf("O maior valor lido foi: %i\n", maior);
    system("pause");

}