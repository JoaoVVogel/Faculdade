#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>



int main(){
    int i, vet[8];
    printf("Digite 8 valores para serem invetidos sua ordem:\n");
    for(i=0;i<8;i++){
        scanf("%i", &vet[i]);

    }
    for(i = 8;i>=0;i--){
        printf("%i  ", vet[i]);
    }
    system("pause");

}