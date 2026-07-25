#include <stdio.h>
#include "lista.h"

void CriarListaVazia(Lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
}

int InserirNoInicio(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro ao alocar memoria..\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo;
        novo->ant = novo;
        return 0;
    }
    l->inicio->ant = novo;
    l->fim->prox = novo;
    novo->prox = l->inicio;
    novo->ant = l->fim;
    l->inicio = novo;
    return 0;
}

int InserirNoFim(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro ao alocar memoria...\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo;
        novo->ant = novo;
        return 0;
    }
    l->fim->prox = novo;
    novo->ant = l->fim;
    novo->prox = l->inicio;
    l->inicio->ant = novo;
    l->fim = novo;
    return 0;
}