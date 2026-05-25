#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int vogais = 0;
    int tamanho =0;
    
    printf("Escreva uma string: ");
    fgets(s, 50, stdin);
    
    tamanho = strlen(s);
    
    
    for (int i =0; i <=tamanho; i++) {
        
        switch (s[i]) {
            
            case 'a':
                vogais++;
                break;
            
            case 'e':
                vogais++;
                break;
            
            case 'i':
                vogais++;
                break;
            case 'o':
                vogais++;
                break;
            case 'u':
                vogais++;
                break;
            case 'A':
                vogais++;
                break;
            case 'E':
                vogais++;
                break;
            case 'I': 
                vogais++;
                break;
            case 'O':
                vogais++;
                break;
            case 'U':
                vogais++;
                break;
            
            
            
            
        }
        
    }
    
    printf("O número de vogais é %d", vogais);

    return 0;
}