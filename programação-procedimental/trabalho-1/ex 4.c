#include <stdio.h>

int main()
{
    float h, r, v;
    float pi = 3.141592;
    
    scanf("%f", &h);
    scanf("%f", &r);
    
    v = pi * r * r * h;
    
    printf("%.6f", v);
    return 0;
}
