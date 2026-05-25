#include <stdio.h>
int main()
{
    int n, i, s;
    
    s = 0;
    
    printf("Escreva dez números: ");
    
    for (i = 0; i <= 9; i++) {
        scanf("%i", &n);
        
        s = n + s;
        
    } 
    
    printf("A soma dos números é: %i", s);
    
    


    return 0;
}
