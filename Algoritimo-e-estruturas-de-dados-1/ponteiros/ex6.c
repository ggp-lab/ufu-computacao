#include <stdio.h>


int somaDobro(int *x, int *y) {
    
    *x = 2* (*x);
    *y = 2* (*y);
    
    return *x + *y;
}



int main()
{
    int A, B, C;
    
    printf("Escreva o valor de A: ");
    scanf("%d", &A);
    printf("Escreva o valor de B: ");
    scanf("%d", &B);
    
    C = somaDobro(&A, &B);
    
    printf("A soma dos dobros é: %d", C);
    return 0;
}