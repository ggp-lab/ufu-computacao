#include <stdio.h>

int main()
{
    int x;
    
    printf("Qual é sua idade? ");
    scanf("%i", &x);
    
    if ( 30 > x ) {
    
    printf("Você é jovem ainda!");
    
    }
    
      else { 
        printf("Você é velho...");
    }

    return 0;
}