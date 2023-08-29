#include<stdio.h>

int main(){
    int n1 = 0, n2 = 0, n3 = 0, primeiro = 0, segundo = 0, terceiro = 0;
    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("\nDigite o segundo valor: ");
    scanf("%i", &n2);
    printf("\nDigite o terceiro valor: ");
    scanf("%i", &n3);

    if(n1 < n2 && n1 < n3){
        primeiro = n1;
        if (n2 > n3) {
            segundo = n3;
            terceiro = n2;
        }else{
            segundo = n2;
            terceiro = n3;
        }

    }else if(n2 < n1 && n2 < n3){
        primeiro = n2;
        if(n1 > n3){
            segundo = n3;
            terceiro = n1;

        }else{
            segundo= n1 ;
            terceiro= n3 ;

            }

        }else if(n3 < n1 && n3 < n2){
        primeiro = n3;
        if(n1 > n2){
            segundo = n2;
            terceiro = n1;

        }else{
            segundo = n1;
            terceiro = n2;
        }
    }
    printf("%i %i %i", primeiro, segundo, terceiro);
    return 0;

}