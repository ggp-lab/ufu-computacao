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

void CriarFilaPrioridadeVazia(Fila *f);
int Enqueue(Fila *f, int elem);
int Dequeue(Fila *f);
int Peek(Fila *f, int *elem);
int ImprimirFila(Fila *f);
int LiberarFila(Fila *f);
#endif