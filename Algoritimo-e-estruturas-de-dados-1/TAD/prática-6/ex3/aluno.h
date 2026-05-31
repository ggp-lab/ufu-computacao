#ifndef ALUNO_H
#define ALUNO_H

typedef struct aluno {
    char nome[100];
    int nota_pratica;
    int nota_teorica;
    struct aluno *prox;
} aluno;

aluno *criar_lista();

aluno *inserir_aluno(aluno *lista);

void buscar_aluno(aluno *lista);

void listar_acima_de_70(aluno *lista);

aluno *remover_aluno(aluno *lista);

void liberar_lista(aluno *lista);


#endif