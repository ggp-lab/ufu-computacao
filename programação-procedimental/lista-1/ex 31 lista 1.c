#include <stdio.h>

int main()
{
   int n1, n2, i;
   
   printf("Escreva um número: ");
   scanf("%i", &n1);
   
   for ( i = 0; i < 5; i++) {
       
       n2 = n1 * (i * 3);
       
       printf("%i\n", n2);
   }
        
    
    
    
    
    return 0;
}