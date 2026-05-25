#include <stdio.h>

int main()
{
    int x;
    
    printf("Escreva um número: ");
    scanf("%i", &x);
    
    if ((x % 3 == 0) && (x % 5 == 0)) {
        
        printf("O número não pode ser divisível por 3 e 5 simultaneamente ");
        
    } else if (x % 5 == 0) {
        
        printf("O número %i é divisível por 5", x);
        
    } else if (x % 3 == 0) {
        
        printf("O número %i é divisível por 3", x);
    } else {
        
        printf("O número não é divisível por 3 ou 5");
    }
        

    return 0;
}
