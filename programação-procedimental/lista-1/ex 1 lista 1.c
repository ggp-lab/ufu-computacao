#include <stdio.h>

int main() {
    
    
    int x;
    double y;
    
    printf("Escreva um número ineteiro: ");
    scanf("%i", &x);
    printf("O número escolhido foi %i \n", x);
    printf("Agora escolha um número real: ");
    scanf("%lf", &y);
    printf("O número real escolhido foi %lf", y);

    return 0;
}
