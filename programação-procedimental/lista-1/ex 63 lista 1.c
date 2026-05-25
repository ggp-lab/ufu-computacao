#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[50];
    int tamanho = 0;
    
    printf("Escreva uma palavra: ");
    fgets(s, 50, stdin);
    
    tamanho = strlen(s);
    
    for (tamanho; tamanho >= 0; tamanho--) {
        
        printf("%c", s[tamanho]);
        
    }
    
    
    
    
    
    
    
    
    return 0;
}