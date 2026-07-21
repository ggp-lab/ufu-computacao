#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int CriarListaVazia (Lista *l){

    l->capacidade = 30;
    l->dados = (int *) malloc(l->capacidade * sizeof(int));

    if(l->dados == NULL) {
        printf("Não foi possível alocar memoria suficiente\n");
        exit(1);
    }

    l->quant = 0;
    return 0;
}

int inserirNaLista (Lista *l, int elem) {

    if(l->quant == l->capacidade){
        printf("Não há mais memória disponível\n");
        return 1;
    }
    l->dados[l->quant] = elem;
    l->quant++;
    return 0;
}

int BuscarNaLista (Lista *l, int elem){
    for(int i =0; i<l->quant;i++){
        if(l->dados[i] == elem){
            printf("O elemento está na posição %d da lista\n", i);
            return 0;
        }
    }
    printf("O elemento %d não está na lista\n", elem);
    return 1;
}

void LiberarLista (Lista *l){
    free(l->dados);
    l->dados = NULL;
    l->capacidade = 0;
    l->quant = 0;
}

