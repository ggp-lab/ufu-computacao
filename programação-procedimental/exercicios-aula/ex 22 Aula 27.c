#include <stdio.h>

int somatorio (int n) {
    
    int soma = 0;
    
    for(int i = 1; i<=n; i++) {
        
        soma = soma + i;
    }
    
    return soma;
    
}




int main()
{
    int n;
    
    printf("Escreva um número para calcular seu somatório: ");
    scanf("%d", &n);
    printf("O valor do somatório é: %d", somatorio(n));
    

    return 0;
}