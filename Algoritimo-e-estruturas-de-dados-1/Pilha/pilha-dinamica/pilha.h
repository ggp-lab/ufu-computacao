#ifndef PILHA_H
#define PILHA_H

typedef struct No{
    int dado;
    struct No *prox;
}No;

typedef struct Pilha{
    No *topo;
}Pilha;

void CriarPilhaVazia(Pilha *p);
int Push(Pilha *p, int elem);
int Pop(Pilha *p, int *elem);
int Peek(Pilha *p, int *elem);

#endif