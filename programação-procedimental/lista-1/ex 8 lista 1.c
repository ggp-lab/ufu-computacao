#include <stdio.h>
#include <math.h>

int main() {
    
    int x;
    int x1;
    int x2;
    
    
    printf("Escreva um número inteiro para descobrir seu sucessor e seu antecessor: ");
    scanf("%i", &x);
    
    x1 = x - 1;
    x2 = x + 1;
    
    printf("O sucessor do numero %i é %i e o antecessor é %i", x, x2, x1);
    
	return 0;
}
