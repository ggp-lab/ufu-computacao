    #ifndef _LISTA_H
    #define _LISTA_H
    #define MAX 100 // Tamanho máximo da lista 
    
    typedef struct { 
        int elementos[MAX]; // Vetor estático 
        int tamanho; // Número atual de elementos na lista 
    } Lista;
    
    
    
    
    void inserirElemento (Lista *l, int n);
    
    void exibirLista (Lista *l);
    
    Lista* iniciarLista();
    
    
    #endif