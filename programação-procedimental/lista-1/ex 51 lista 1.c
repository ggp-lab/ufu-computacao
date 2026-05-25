#include <stdio.h>

int main()
{ 
    int mat[5][5];
    
    int soma = 0;
    
    printf("Escreva uma matriz 5x5(porfavorsenaominhamaevaimorrerhojeas23:99datarde): ");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j<5;j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j<5;j++) {
            mat[i][j] = mat[i][j] * 2;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j<5;j++) {
            soma = soma + mat[i][j];
        }
    }
    printf("%d", soma);

    return 0;
}