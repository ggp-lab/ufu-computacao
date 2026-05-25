#include <stdio.h>

int main()
{
    int x;
    
    scanf("%i", &x);
    
    if (x % 400 == 0) {
        printf("SIM");
    } else if ((x % 4 == 0) && (x % 100 != 0)) {
        printf("SIM");
    } else {
        printf("NAO");
    }
    return 0;
}
