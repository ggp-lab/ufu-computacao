#include <stdio.h>
#include <string.h>


int main()
{
    char s[50];
    char contador;
    int contador_vogais = 0;
    
    fgets(s, 50, stdin);
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        contador = s[i];
        
        switch (contador) {
        
        case 'a':
            contador_vogais++;
            break;
            
        case 'e':
            contador_vogais++;
            break;
            
        case 'i':
            contador_vogais++;
            break;
            
        case 'o':
            contador_vogais++;
            break;
                
        case 'u':
            contador_vogais++;
            break;
            
        default:
            break;
        
            
        }
    }
    
    printf("a quantidade de vogais é %d", contador_vogais);
    
    

    return 0;
}
