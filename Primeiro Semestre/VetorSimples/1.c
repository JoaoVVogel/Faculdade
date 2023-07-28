#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>


int main(){
    int A[6] = {1, 0, 5, -2, -5, 7}, soma, i;
    soma = A[0] + A[1] + A[5];
    printf("soma = %i \n", soma);
    A[4] = 100;
    for(i=0;i<6;i++){
        printf("%i \n", A[i]);
    }
    system("pause");
}