/*Escreva um programa para ler 5 valores, e, em seguida, mostrar todos os valores lidos juntamente com
o maior, o menor e a média dos valores.*/

#include <stdio.h>

int main()
{
    int vet[5];
    int n, s, media, maior, menor;
    
    s = 0;
    
    printf("Escreva 5 números: ");
    
    for (int i = 0; i < 5; i++) {
        
        scanf("%d", &vet[i]);
        s = s + vet[i];
    }
    
    media = s / 5;
    
    printf("O vetor é: ");
    
    for (int i = 0; i < 5; i++) {
        
        printf("%d", vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    
    for (int j = 0; j < 5; j++) {
        
        if (vet[j] > maior ) {
            
            maior = vet[j];
            
        } else if(vet[j] < menor) {
            
            menor = vet[j];
        }
    }
    
    printf(" O maior número é: %d \n e o menor é: %d, além disso a média é: %d", maior, menor, media);

    return 0;
}
