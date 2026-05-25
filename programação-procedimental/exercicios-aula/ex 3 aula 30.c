#include <stdio.h>

int contar_negativos (float *vet, int N) {
    
    int contador = 0;
    
    for (int i = 0; i<N;i++){
        if (vet[i] < 0){
            contador++;
            
        }
    }
    
    return contador;
}

int main()
{
    
    float vet[] = {1.0,-2.0,-3.0};
    
    printf("O valor de negativos do vetor é %d", contar_negativos(vet, 3));
    
    
    
    
    

    return 0;
}