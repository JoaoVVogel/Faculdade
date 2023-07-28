#include<stdio.h>
#include<stdlib.h>

int x;
int main(){
    x = 0;
    do{
        printf("%i\n", x);
        x = x + 2;

    }while(x < 51);
        system("pause");


}