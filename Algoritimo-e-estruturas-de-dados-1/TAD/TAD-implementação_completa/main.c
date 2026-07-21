#include <stdio.h>
#include "lista.h"

int main() {

    Lista lista;

    
    CriarListaVazia(&lista);

    
    inserirNaLista(&lista, 10);
    inserirNaLista(&lista, 20);
    inserirNaLista(&lista, 30);
    inserirNaLista(&lista, 40);
    inserirNaLista(&lista, 50);

    
    BuscarNaLista(&lista, 30);
    BuscarNaLista(&lista, 100);

    
    LiberarLista(&lista);

    return 0;
}