#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int *dados;
    int quant;
    int capacidade;
} Lista;

int CriarListaVazia (Lista *l);
int inserirNaLista (Lista *l, int elem);
int BuscarNaLista (Lista *l, int elem);
void LiberarLista (Lista *l);
#endif