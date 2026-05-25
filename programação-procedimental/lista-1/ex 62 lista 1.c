#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[50], t[50];
    int verificador = 0;
    
    printf("Escreva uma palavra: ");
    fgets(s, 50, stdin);
    printf("Escreva outra palavra: ");
    fgets(t, 50, stdin);
    
    if (strcmp(s, t) == 0){
        printf("As strings %s e %s são iguais", s, t);
    } else {
        printf("As strings %s e %s sao diferentes", s, t);
    }
    
    
    return 0;
}