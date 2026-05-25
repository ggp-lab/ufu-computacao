//Escreva um programa que leia 5 números inteiros e os armazene em um vetor. Imprima o vetor, o
//maior elemento e a posição que ele se encontra.

#include <stdio.h>

int main()
{ 
    int vet[5];
    int n = 0;
    int pos = 0;
    
    printf("Escreva 5 números inteiros: ");
    
    for (int i = 0; i < 5; i++) {
        
        scanf("%d", &vet[i] );
    } 

    
    printf("O vetor é: ");
    
    for (int i = 0; i < 5; i++) {
        
        printf("%d ", vet[i]);
        
    }
    
    
    for (int j = 0; j < 5; j++) {
        
        if (vet[j] > n) {
            
            n = vet[j];
            pos = j + 1;
        }
    }
 
    printf("O maior elemento do vetor é %d e tem posição %d", n, pos);

    return 0;
}
