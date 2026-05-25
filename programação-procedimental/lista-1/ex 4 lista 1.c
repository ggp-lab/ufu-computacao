#include <stdio.h>
#include <math.h>

int main() {
    
    float valor_r; // valor de 1 dólar para real
    float valor_df; // valor de dólares após o cambio
    float valor_u; // valor que o usuario colocar em reais
    
    printf("Olá, irei te ajudar a saber o cambio de real para dólar, me diga quantos reais está um dólar hoje? ");
    scanf("%f", &valor_r);
    
    
    printf("Ok, agora quantos reais você quer cambiar? ");
    scanf("%f", &valor_u);
    
    valor_df = valor_u / valor_r;
    
    printf("O valor de %.2f reais em dólares é: %.2f", valor_u, valor_df);

	return 0;
}
