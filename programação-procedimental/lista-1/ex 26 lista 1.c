#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    
    printf("Escreva um número entre 1 e 7 para representar cada dia da semana: ");
    scanf("%i", &x);
    
    switch (x) {
        
        case 1:
        printf("Hoje é domingo");
        break;
        
        case 2:
        printf("Hoje é segunda-feira");
        break;
        
        case 3:
        printf("Hoje é terça-feira");
        break;
        
        case 4:
        printf("Hoje é quarta-feira");
        break;
        
        case 5:
        printf("Hoje é quinta-feira");
        break;
        
        case 6:
        printf("Hoje é sexta-feira");
        break;
        
        case 7:
        printf("Hoje é sábado");
        break;
        
        default:
        printf("Conceito inválido");
        
    }

 
    return 0;
}