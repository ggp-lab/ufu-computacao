    #include "Lista.h"
    #include <stdio.h>
    #include <stdlib.h>
    
    
    
    Lista* iniciarLista() { 
        Lista *l;
        l = malloc(sizeof(Lista));
        l->tamanho = 0;
        
        return l;
    }
    
    void inserirElemento (Lista *l, int n) {
        if (l->tamanho < MAX){
            l->elementos [l->tamanho] = n;
            l->tamanho++;
        } else {
            printf("memoria insuficiente.");
        }
    }
    
    void exibirLista (Lista *l) {
        for (int j = 0; j<l->tamanho; j++) {
            printf("%d \n", l->elementos[j]);
        }
    }