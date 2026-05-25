#include <stdio.h>

int main()
{
    int x;
    
    
    printf("Escreva um ano: ");
    scanf("%i", &x);
    
    if (x % 400 == 0) {
        printf("O ano %i é bissexto", x);
    } else if ((x % 4 == 0) && (x % 100 != 0)) {
        printf("O ano %i é bissexto", x);
    } else {
        printf("O ano %i não é bissexto", x);
    }
 
    return 0;
}