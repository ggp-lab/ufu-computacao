#include <stdio.h>
#include "fila.h"

void CriarFilaPrioridadeVazia(Fila *f){
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
        f->inicio = novo;
        f->fim = novo;
        novo->prox = NULL;
        return 0;
    }
    if(f->inicio->dado < novo->dado){
        novo->prox = f->inicio;
        f->inicio = novo;
        return 0;
    }
    No *aux = f->inicio;
    No *ant = f->inicio;
    while(aux!= NULL &&aux->dado>novo->dado){
        ant = aux;
        aux = aux->prox;
    }
    if(aux == NULL){
        ant->prox = novo;
        novo->prox = NULL;
        f->fim = novo;
        return 0;
    }
    ant->prox = novo;
    novo->prox = aux;
    return 0;
}

int Dequeue(Fila *f){
    if(f->inicio == NULL){
        printf("A fila é vazia...\n");
    return 1;
    }
    No *aux = f->inicio;
    if(f->inicio->prox == NULL){
        f->inicio = NULL;
        f->fim = NULL;
        free(aux);
        return 0;
    }
    
    f->inicio = aux->prox;
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

int ImprimirFila(Fila *f){
    if(f->inicio == NULL){
        printf("A fila é vazia...\n");
        return 1;
    }
    No *aux = f->inicio;
    while(aux!=NULL){
        printf("%d\n", aux->dado);
        aux=aux->prox;
    }
    return 0;
}

int LiberarFila(Fila *f){
    if(f->inicio == NULL){
        printf("A fila é vazia...\n");
        return 1;
    }
    No *aux = f->inicio;
    No *ant = f->inicio;
    while(aux!=NULL){
        ant = aux;
        aux=aux->prox;
        free(ant);
    }
    f->inicio = NULL;
    f->fim = NULL;
    return 0;
}