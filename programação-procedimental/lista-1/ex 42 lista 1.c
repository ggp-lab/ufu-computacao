//Crie um programa que leia 5 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa

#include <stdio.h>

int main()
{ 
    int vet[5];
    int n;
    
    printf("Escreva 5 números: ");
    
    for (int i = 0; i < 5; i++) {
        
        scanf("%d", &vet[i]);
    }
    
    printf("O vetor na ordem inversa é: ");
    
    for (int i = 4; i >= 0; i--) {
        
        printf("%d ", vet[i]);
    }
    

    return 0;
}
