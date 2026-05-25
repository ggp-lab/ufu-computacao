#include <stdio.h>
#include <math.h>

int main() {
    
    float vi; // velocidade em metros por segundo
    float vf; // velocidade em kilometros por hora
    
    printf("Escreva uma velocidade (m/s): ");
    scanf("%f", &vi);
    
    vf = vi * 3.6;
    
    printf("A velocidade de %.2f m/s em kilometros por hora é de %.2f km/h", vi, vf);
    
 
    

	return 0;
}
