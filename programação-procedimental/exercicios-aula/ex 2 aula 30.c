#include <stdio.h>


void calcular_espera (float r, float *area, float *volume) {
    
    *area = 3.1415 * r * r;
    *volume = 4/3 * 3.1415 * r * r * r;
}

int main()
{
    float R;
    printf("Escreva o raio do circulo: ");
    scanf("%f", &R);
    
    float area_calculada, volume_calculado;
    
    calcular_espera(R, &area_calculada, &volume_calculado);
    
    printf("O valor da area é %f e o valor do volume é %f", area_calculada, volume_calculado);
    

    return 0;
}