#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z;
    
    printf("Escreva um número um número: ");
    scanf("%lf", &x);
    
    if (x > 0) {
        y = sqrt(x);
        printf("A raíz quadrada de %.2lf é %.2lf", x, y);
    } else {
        z = x * x;
        printf("O número %.2lf ao quadrado é %.2lf", x, z);
    }
    return 0;
}