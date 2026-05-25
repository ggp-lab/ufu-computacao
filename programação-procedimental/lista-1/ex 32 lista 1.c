#include <stdio.h>

int main()
{
    int i, soma, media, n;
    
    soma = 0;
    i = 0;
    
    printf("Escreva um número: ");
    
   while (i <= 9) {
       
       scanf("%i", &n);
       
       soma = soma + n;
     
       i++;
   }
    media = soma / 10.0;
    
    printf("A média é: %i", media);
    
    return 0;
}