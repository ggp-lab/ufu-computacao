#include <stdio.h>
#include "fila.h"

void CriarFilaVazia(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
}

int Enqueue(Fila *f, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro ao alocar memoria...\n");
        return 1;
    }
    novo->dado = elem;
    if(f->inicio == NULL){
        f->fim = novo;
        f->inicio = novo;
        novo->prox = NULL;
        return 0;
    }
    f->fim->prox = novo;
    novo->prox = NULL;
    f->fim = novo;
    return 0;
}

int Dequeue(Fila *f, int *elem){
    if(f->inicio == NULL){
        printf("Fila vazia...\n");
        return 1;
    }
    No *aux = f->inicio;
    if(f->inicio == f->fim){
        *elem = f->inicio->dado;
        free(aux);
        f->inicio = NULL;
        f->fim = NULL;
        return 0;
    }
    *elem = f->inicio->dado;
    f->inicio = f->inicio->prox;
    free(aux);
    return 0;
}

int Peek(Fila *f, int *elem){
    if(f->inicio == NULL){
        printf("A fila é vazia...\n");
        return 1;
    }
    *elem = f->inicio->dado;
    return 0;
}