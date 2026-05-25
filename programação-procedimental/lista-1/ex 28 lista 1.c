#include <stdio.h>

int main()
{
    int x, y, z;
    int rs, rsb, rp;
    double rd;
    
    printf("Escreva o número da operação que deseja: \n");
    printf("1 para somar dois números \n");
    printf("2 para a diferença entre dois números \n");
    printf("3 para o produto entre dois números \n");
    printf("4 para a divisão entre dois números \n");
    printf(" \n");
    scanf("%i", &x);
    
    switch (x) {
        
        case 1 :
        printf("Escreva os números para somar: ");
        scanf("%i %i", &y, &z);
        
        rs = y + z;
        
        printf("O resultado de %i somado com %i é: %i", y, z, rs);
        break;
        
        case 2 : 
        printf("Escreva dois números para subtrair: ");
        scanf("%i %i", &y, &z);
        
        rsb = y - z;
        
        printf("O resultado de %i subtraido por %i é: %i", y, z, rsb);
        break;
        
        case 3 :
        printf("Escreva dois números para multiplicar-los: ");
        scanf("%i %i", &y, &z);
        
        rp = y * z;
        
        printf("O resultado de %i multiplicado por %i é: %i", y, z, rp);
        break;
        
        case 4 :
        printf("Escreva dois números para realizar a divisão: ");
        scanf("%i %i", &y, &z);
        
             if (z == 0) {
                 printf("Não é permitido dividir por zero");
                 break;
             } else {
                 rd = (double) y / z;
                 printf("O resultado de %i dividido por %i é: %.3lf", y, z, rd);
                 break;
             }
        default:
        printf("Conceito inválido");
        break;
        
    }
    
    
    
    return 0;
}