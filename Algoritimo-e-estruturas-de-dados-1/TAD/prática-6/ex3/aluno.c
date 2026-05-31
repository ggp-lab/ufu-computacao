#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

aluno *criar_lista() {
    return NULL;
}

aluno *inserir_aluno(aluno *lista) {
    aluno *novo = (aluno *) malloc(sizeof(aluno));

    if (novo == NULL) {
        printf("erro ao alocar memoria.\n");
        return lista;
    }

    printf("nome: ");
    getchar();
    fgets(novo->nome, 100, stdin);
    novo->nome[strcspn(novo->nome, "\n")] = '\0';

    printf("nota pratica: ");
    scanf("%d", &novo->nota_pratica);

    while (novo->nota_pratica < 0 || novo->nota_pratica > 50) {
        printf("nota invalida. digite novamente: ");
        scanf("%d", &novo->nota_pratica);
    }

    printf("nota teorica: ");
    scanf("%d", &novo->nota_teorica);

    while (novo->nota_teorica < 0 || novo->nota_teorica > 50) {

        printf("nota invalida. digite novamente: ");

        scanf("%d", &novo->nota_teorica);
    }

    novo->prox = lista;

    printf("aluno inserido com sucesso.\n");

    return novo;
}

void buscar_aluno(aluno *lista) {
    char nome[100];
    aluno *atual = lista;

    printf("nome completo: ");

    getchar();

    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    while (atual != NULL) {

        if (strcmp(atual->nome, nome) == 0) {
            printf("nota final de %s: %d\n", atual->nome, atual->nota_pratica + atual->nota_teorica);
            return;
        }


        atual = atual->prox;
    }

    printf("aluno nao encontrado.\n");
}



void listar_acima_de_70(aluno *lista) {

    aluno *atual = lista;


    int encontrou = 0;

    while (atual != NULL) {
        int nota_final = atual->nota_pratica + atual->nota_teorica;


    
        if (nota_final > 70) {
            printf("nome: %s | nota final: %d\n", atual->nome, nota_final);
            encontrou = 1;
        }

        atual = atual->prox;
    }

    if (!encontrou) {
        printf("nenhum aluno com media superior a 70.\n");
    }
}




aluno *remover_aluno(aluno *lista) {


    char nome[100];


    aluno *atual = lista;


    aluno *anterior = NULL;



    printf("nome do aluno: ");

    getchar();

    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = '\0';



    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            if (anterior == NULL) {
                lista = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }

            free(atual);
            printf("aluno removido com sucesso.\n");
            return lista;
        }

        anterior = atual;
        atual = atual->prox;
    }


    printf("aluno nao encontrado.\n");

    return lista;
}

void liberar_lista(aluno *lista) {
    aluno *atual = lista;

    while (atual != NULL) {
        aluno *temp = atual;
        
        atual = atual->prox;
        
        free(temp);
    }
}