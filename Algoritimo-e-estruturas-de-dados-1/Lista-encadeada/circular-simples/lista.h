#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int dado;
    struct No *prox;
}No;
typedef struct Lista{
    struct Lista *inicio;
}Lista;

void CriarListaVazia(Lista *l);
int InserirNoInicio(Lista *l, int elem);
int InserirNoFim(Lista *l, int elem);
int BuscarElemento(Lista *l, int elem);
int RemoverElemento(Lista *l, int elem);
void ImprimirLista(Lista *l);
int LiberarLista(Lista *l);

#endif