#include <stdio.h>
#include "lista.h"


void CriarListaVazia(Lista *l){
    l->inicio = NULL;
}

int InserirNoInicio(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if (novo==NULL){
        printf("Erro ao alocar memória...\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        novo->prox = novo;
        return 0;
    }
    No *aux = l->inicio;
    while(aux->prox != l->inicio){
        aux = aux->prox;
    }
    novo->prox = l->inicio;
    aux->prox = novo;
    l->inicio = novo;
    return 0;
}

int InserirNoFim(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo == NULL){
        printf("Erro ao alocar memoria...\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        novo->prox = novo;
        return 0;
    }
    No *aux = l->inicio;
    while(aux->prox != l->inicio){
        aux=aux->prox;
    }
    aux->prox = novo;
    novo->prox = l->inicio;
    return 0;
}

int BuscarElemento(Lista *l, int elem){
    if(l->inicio == NULL){
        printf("Não há elementos na lista...\n");
        return 0;
    }
    No *aux = l->inicio;
    do{
        if(aux->dado == elem){
            printf("Elemento encontrado!!!\n");
            return 0;
        }
        aux=aux->prox;
    }while(aux!=l->inicio);
    printf("Não foi possivel encontrar o elemento...\n");
    return 0;
}

int RemoverElemento(Lista *l, int elem){
    if(l->inicio == NULL){
        printf("Erro, a lista é vazia\n");
        return 1;
    }
    No *aux = l->inicio;
    if(aux->dado == elem){
        if(aux->prox == aux){
            l->inicio = NULL;
            free(aux);
            return 0;
        }
        No *temp = l->inicio;
        while(aux->prox != l->inicio){
            aux=aux->prox;
        }
        
        l->inicio = temp->prox;
        aux->prox = l->inicio;
        free(temp);
        return 0;
    }
    No *temp =l->inicio;
    while(aux->prox != l->inicio && aux->dado != elem){
        temp = aux;
        aux=aux->prox;
    }
    if(aux->dado == elem){
        if(aux->prox == l->inicio){
            temp->prox = l->inicio;
            free(aux);
            return 0;
        }
        temp->prox = aux->prox;
        free(aux);
        return 0;
    }
    printf("Não há o elemento na lista para ser removido\n");
    return 1;
}