#include <stdio.h>

int main()
{
    int n, i, s;
    
    s = 0;
    
    for (i = 1; i <= 50; i++) {
        
        s = i + s;
        
    }
    printf("A soma dos 50 primeiros números é: %i", s);
    
    return 0;
}