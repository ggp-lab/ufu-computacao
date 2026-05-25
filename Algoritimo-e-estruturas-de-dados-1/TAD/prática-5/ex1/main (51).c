    #include <stdio.h>
    #include "Lista.h"

    int main()
    {
    Lista *lista; 
    lista = iniciarLista(); 
    inserirElemento(lista, 10); 
    inserirElemento(lista, 20); 
    inserirElemento(lista, 30); 
    exibirLista(lista);

    return 0;
    }