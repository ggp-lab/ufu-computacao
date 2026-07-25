#include <stdio.h>
#include "pilha.h"

void CriarPilhaVazia(Pilha *p){
    p->topo = NULL;
}

int Push(Pilha *p, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro ao alocar memoria...\n");
        return 1;
    }
    novo->dado = elem;
    if(p->topo == NULL){
        p->topo = novo;
        novo->prox = NULL;
        return 0;
    }
    novo->prox = p->topo;
    p->topo = novo;
    return 0;
}

int Pop(Pilha *p, int *elem){
    if(p->topo == NULL){
        printf("Pilha vazia\n");
        return 1;
    }
    No *aux = p->topo;
    *elem = aux->dado;
    p->topo = aux->prox;
    free(aux);
    return 0;
}

int Peek(Pilha *p, int *elem){
    if(p->topo == NULL){
        printf("Pilha vazia...\n");
        return 1;
    }
    *elem = p->topo->dado;
    return 0;
}