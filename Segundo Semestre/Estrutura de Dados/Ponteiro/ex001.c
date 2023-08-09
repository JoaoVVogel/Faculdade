//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
//um deles. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
//variável usando os ponteiros. Imprima os valores das variáveis antes e após a
//modificação.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1 = 1;
    float n2 = 2.5;
    char n3 = 'c';

    int *ptr1 = &n1;
    float *ptr2 = &n2;
    char *ptr3 = &n3;

    printf("N1 antes: %i\n", n1);
    printf("N2 antes: %f\n", n2);
    printf("N3 antes: %c\n", n3);

    *ptr1 = 2;
    *ptr2 = 3.5;
    *ptr3 = 'd';

    printf("N1 depois: %i\n", n1);
    printf("N2 depois: %f\n", n2);
    printf("N3 depois: %c", n3);
    

}