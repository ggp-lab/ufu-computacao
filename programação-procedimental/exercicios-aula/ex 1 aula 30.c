#include <stdio.h>

int main()
{
    int a,b;
    
    a = 10;
    b = 20;
    
    
    int *p1 = &a;
    int *p2 = &b;
    
    if(&a > &b) {
        printf("%d tem memoria maior endereço: %p \n", a, p1);
        printf("%d tem menor endereço: %p", b, p2);
    } else {
        printf("%d tem memoria maior endereço: %p", b, p2);
    }

    return 0;
}