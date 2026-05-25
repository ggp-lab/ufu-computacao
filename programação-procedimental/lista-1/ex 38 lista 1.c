#include <stdio.h>
int main()
{
    int n, i, s;
    
    printf("Escreva 10 números inteiros: ");
    
    s = 0;
    
    for (i=0; i <= 9; i++) {
        
        scanf("%i", &n);
        
        if (n < 0) {
            
        } else {
            
            s = s + n; }
        
    } 
    
    printf("A soma dos números é: %i", s);


    return 0;
}
