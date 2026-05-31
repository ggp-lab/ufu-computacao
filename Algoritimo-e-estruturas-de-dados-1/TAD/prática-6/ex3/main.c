#include <stdio.h>
#include "aluno.h"

int main() {
    aluno *lista = criar_lista();
    int opcao;

    do {
        printf("1 - inserir aluno\n");
        printf("2 - buscar aluno\n");
        printf("3 - retornar alunos com media superior a 70\n");
        printf("4 - remover aluno\n");
        printf("0 - sair\n");
        printf("escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = inserir_aluno(lista);
                
                break;

            case 2:
                buscar_aluno(lista);
                
                break;

            case 3:
                listar_acima_de_70(lista);
                
                break;

            case 4:
                lista = remover_aluno(lista);
                
                break;

            case 0:
                printf("encerrando\n");
                
                break;

            default:
                printf("opcao invalida.\n");
        }

    } while (opcao != 0);

    liberar_lista(lista);

    return 0;
}