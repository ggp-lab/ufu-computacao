#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    
    printf("Escreva um número: ");
    scanf("%i", &x);
    
    y = x % 2;
    
    if (y > 0) {
        printf("Seu número é impar");
    } else {
        
        printf("Seu número é par");
        
    }    

    return 0;
}