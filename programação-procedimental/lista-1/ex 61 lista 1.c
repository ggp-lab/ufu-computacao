
#include <stdio.h>

int main()
{
    char s[50];
    int tamanho = 0;
    
    
    printf("Escreva uma palavra: ");
    fgets(s, 50, stdin);
    printf("A string é: %s", s);
    
    for (int i = 0; i <=50; i++) {
        if (s[i] != '\n') {
            tamanho++;
        } else {
            break;
        }
        
    }
    
    printf("E o tamanho da sua string é %d", tamanho);
    
    
    return 0;
}