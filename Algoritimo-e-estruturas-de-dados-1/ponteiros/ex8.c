#include <stdio.h>

int main()
{
    float vet[10] = { 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    
    for (int i = 0; i<10; i++) {
        printf("%d°: %p\n", i+1, &vet[i]);
    }

    return 0;
}
