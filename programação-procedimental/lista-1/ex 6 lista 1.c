#include <stdio.h>
#include <math.h>

int main() {
    
    float n1;
    float n2;
    float n3;
    float n4;
    float nf;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Por último, digite a quarta nota: ");
    scanf("%f", &n4);
    
    nf = (n1 + n2 + n3 + n4)/4;
    
    printf("A nota final é de %.2f", nf);

	return 0;
}
