#ifndef FILA_H
#define FILA_H

typedef struct No{
    int dado;
    struct No *prox;
}No;

typedef struct Fila{
    No *inicio;
    No *fim;
}Fila;

void CriarFilaVazia(Fila *f);
int Enqueue(Fila *f, int elem);
int Dequeue(Fila *f, int *elem);
int Peek(Fila *f, int *elem);

#endif