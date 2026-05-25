#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z;
    
    printf("Escreva o salário do trabalhador: ");
    scanf("%lf", &x);
    printf("Agora o valor da prestação do emprestimo: ");
    scanf("%lf", &y);
    
    z = 0.3 * x;
    
    if (y > z) {
        
    printf("Emprestimo não concedido");
    } else {
        
        printf("Emprestimo concedido");
    }
    
    return 0;
}