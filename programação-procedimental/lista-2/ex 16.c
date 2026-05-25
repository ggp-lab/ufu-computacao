#include <stdio.h>


float relacao (int a, int b) {
    
    int resultado;
    
    resultado = (a*(b+3))/(a-b);
    
    return resultado;
    
}




int main()
{
    int a, b;
    relacao(a,b);
    
    printf("Escreva um número para a e para b:\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    printf("O valor da operação é: %.2f ", relacao(a,b));
    
    return 0;
}