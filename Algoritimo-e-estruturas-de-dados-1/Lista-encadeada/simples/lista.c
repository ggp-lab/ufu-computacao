#include <stdio.h>
#include "Lista.h"

void CriarListaVazia (Lista *l) {
    l->inicio = NULL; 
}

int InserirInicio(Lista *l, int elem) {
    No *novo = (No *) malloc(sizeof(No));
    if(novo == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    novo->dado = elem;
    novo->prox = l->inicio;
    l->inicio = novo;
    return 0;
}

int Inserirfim(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if (novo==NULL){
        printf("Não foi possivel criar um novo nó\n");
        exit(1);
    }
    if (l->inicio == NULL){
        novo->dado = elem;
        novo->prox = NULL;
        l->inicio = novo;
        return 0;
    }
    No *aux = l->inicio;
    while(aux->prox!=NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
}

int BuscarElemento(Lista *l, int elem){
    if(l->inicio == NULL){
        printf("A lista é vazia\n");
        return 1;
    }
    No *aux = l->inicio;
    while(aux->dado != elem && aux->prox !=NULL){
        aux = aux->prox;
    }
    
    if(aux != NULL){
        printf("Elemento encontrado!!\n");
        return 0;
    } else {
        printf("Elemento não encontrado :(\n");
        return 1;
    }
}

int RemoverElemento (Lista *l, int elem){
    if(l->inicio == NULL){
        printf("A lista é vazia\n");
        return 1;
    }
    No *aux = l->inicio;
    No *ant = l->inicio;
    if(aux->dado == elem){
        l->inicio = aux->prox;
        free(aux);
        return 0;
    }
    while(aux->dado != elem && aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    if(aux->dado == elem){
        ant->prox = aux->prox;
        free(aux);
        return 0;
    } else {
        printf("Elemento não encontrado\n");
        return 1;
    }
}

int InserçãoOrdenada(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        novo->prox = NULL;
        return 0;
    }
    No *atual = l->inicio;
    No *ant = l->inicio;
    if(atual->dado > novo->dado){
        novo->prox = l->inicio;
        l->inicio = novo;
        return 0;
    }
    while(novo->dado > atual->dado && atual->prox != NULL){
        ant = atual;
        atual = atual->prox;
    }
    if(novo->dado < atual->dado){
        novo->prox = atual;
        ant->prox = novo;
        return 0;
    } else {
        atual->prox = novo;
        novo->prox = NULL;
        return 0;
    }
}

void ImprimirLista(Lista *l){
    No *aux = l->inicio;

    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}

int LiberarLista(Lista *l){
    if(l->inicio == NULL){
        return 0;
    }
    No *aux = l->inicio;
    No *ant = l->inicio;
    while(aux != NULL){
        ant = aux;
        aux = aux->prox;
        free(ant);
    }
    l->inicio = NULL;
    return 0;
}









