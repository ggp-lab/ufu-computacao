#include <stdio.h>

int main() {
    
    int x;
    int y;
    int z;
    
    printf("Escreva três números inteiros que vão ser somados: ");
    scanf("%i %i %i", &x, &y, &z);
    
    int s;
    s = x + y + z;
    
    printf("A soma desses numeros é: %i", s);



	return 0;
}
