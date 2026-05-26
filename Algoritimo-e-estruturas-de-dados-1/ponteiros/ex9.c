#include <stdio.h>

int main()
{
    float vet[3][3] = { 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0};
    int i, j;
    
    for (i = 0; i<3; i++) {
        for (j = 0; j<3; j++) {
            printf("%d° %d°: %p\n", i+1, j+1, &vet[i][j]);
        }
    }

    return 0;
}
