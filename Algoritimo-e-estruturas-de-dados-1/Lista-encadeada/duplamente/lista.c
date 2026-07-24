#include <stdio.h>
#include "Lista.h"

void CriarListaVazia(Lista *l){
    l->inicio = NULL;
    l->fim = NULL;
}

int inserirIncio(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }
    novo->dado = elem;
    novo->ant = NULL;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->prox = NULL;
        return 0;
    }
    
    novo->prox = l->inicio;
    l->inicio->ant = novo;
    l->inicio = novo;
    return 0;
}

int InserirNofim(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro de alocação de momoria\n");
        return 1;
    }
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->prox = NULL;
        novo->ant = NULL;
        return 0;
    }
    l->fim->prox = novo;
    novo->ant = l->fim;
    novo->prox = NULL;
    l->fim = novo;
    return 0;
}

int BuscarElemento(Lista *l , int elem){
    No *aux = l->inicio;
    if(l->inicio == NULL){
        printf("A lista é vazia...\n");
        return 1;
    }
    while(aux != NULL && aux->dado != elem){
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Não foi possivel encontrar o elemento na lista\n");
        return 1;
    }
    if(aux->dado == elem){
        printf("Elemento encontrado\n");
        return 0;
    }
    return 1;
}

int RemoverElemento(Lista *l, int elem){
    if(l->inicio == NULL){
        printf("A lista é vazia...\n");
        return 1;
    }

    No *aux = l->inicio;

    if(l->inicio == l->fim){
        if(aux->dado == elem){
            l->inicio = NULL;
            l->fim = NULL;
            free(aux);
            return 0;
        }
        else {
            printf("Não foi possivel encontrar o elemento para ser removido\n");
            return 1;
        }
    }

    if(l->inicio->dado == elem){
        l->inicio = aux->prox;
        l->inicio->ant = NULL;
        free(aux);
        return 0;
    }

    if(l->fim->dado == elem){
        No *temp = l->fim;
        l->fim = l->fim->ant;
        l->fim->prox = NULL;
        free(temp);
        return 0;
    }
    

    while(aux != NULL && aux->dado != elem){
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Não há um elemento %d na lista para ser removido\n", elem);
        return 1;
    }
    if(aux->dado == elem){
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;
        free(aux);
        return 0;
    }
    return 1;
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
        printf("A lista já é vazia...\n");
        return 1;
    }
    No *aux = l->inicio;
    No *temp = l->inicio;
    while(aux != NULL){
        temp = aux;
        aux = aux->prox;
        free(temp);
    }
    l->inicio = NULL;
    l->fim = NULL;
    return 0;
}

int InsercaoOrdenada(Lista *l, int elem){
    No *novo = (No *)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro ao alocar memoria...\n");
        return 1;
    }
    No *aux = l->inicio;
    novo->dado = elem;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
        novo->ant = NULL;
        novo->prox = NULL;
        return 0;
    }
    if(l->inicio->dado >novo->dado){
        novo->prox = l->inicio;
        novo->ant = NULL;
        l->inicio->ant = novo;
        l->inicio = novo;
        return 0;
    }
    while(aux->dado < novo->dado && aux->prox != NULL){
        aux = aux->prox;
    }
    if(aux->prox == NULL && aux->dado < novo->dado){
        aux->prox = novo;
        novo->ant = aux;
        novo->prox = NULL;
        l->fim = novo;
        return 0;
    }
    aux->ant->prox = novo;
    novo->ant = aux->ant;
    aux->ant = novo;
    novo->prox = aux;
    return 0;
}