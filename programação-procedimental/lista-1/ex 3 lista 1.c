#include <stdio.h>
#include <math.h>

int main() {
 
  int x; 
  
  printf("Insira o número para elevar ao quadrado: ");
  scanf("%i", &x);
  
  int y;
  
  y = pow(x,2);
  
  printf("O quadrado de %i é %i", x, y);


	return 0;
}
