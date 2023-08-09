//Implemente uma função que calcule a área da superfície e o volume de uma esfera de
//raio R. Essa função deve obedecer ao protótipo:
//void calc_esfera(float R, float *area, float *volume)
//A área da superfície e o volume são dados, respectivamente, por:
// A = 4 * pi * R2
// V = 4/3 * pi * R3 
#include<stdio.h>
#include<math.h>

void esfera(float r, float *area, float *volume){
    *area = 4 * 3.14 * pow(r, 2);
    *volume = (4.0/3.0) * 3.14 * pow(r, 3);
}

int main(){
    float raio, area, volume;
    printf("Valor do raio: ");
    scanf("%f", &raio);
    esfera(raio, &area, &volume);
    printf("Area : %.2f\n", area);
    printf("Volume : %.2f", volume);

}