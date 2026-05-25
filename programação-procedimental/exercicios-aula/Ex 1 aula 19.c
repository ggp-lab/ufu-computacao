#include <stdio.h>
#include <string.h>


int main()
{
    char s[50];
    int contador = 0;
    
    
    gets(s);
    
    while (s[contador] != '\0') {
        
        
        contador++;
        
    }
    
    printf("o tamanho da string é de: %d", contador);
    
    
    

    return 0;
}
