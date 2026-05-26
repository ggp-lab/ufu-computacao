#include <stdio.h>


void soma (int *x, int y) {
    
    *x = (*x) + (y); 
    
}


int main()
{
    int A, B;
    
    printf("Escreva o valor de A: ");
    scanf("%d", &A);
    printf("Escreva o valor de B: ");
    scanf("%d", &B);
    soma(&A, B);
    
    printf("A soma entre A e B é: %d", A);
    

    return 0;
}
