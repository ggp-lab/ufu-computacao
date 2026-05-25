#include <stdio.h>

int main()
{
    double n1, n2, n3, m;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    
    m = ((n1 * 2) + (n2 * 3) + (n3 * 3)) / 8 ;
    
    printf("%.2lf", m);
    
    return 0;
}
