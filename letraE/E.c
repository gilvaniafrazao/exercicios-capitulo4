#include <stdio.h>

int main(){

    float a,b,c, delta;

    printf("Insira um valor A: ");
    scanf("%f", &a);
    printf("Insira um valor B: ");
    scanf("%f", &b);
    printf("Insira um valor C: ");
    scanf("%f", &c);

    delta = (b) * (b) - (4 * a * c);

    if (delta < 0)
    {
        printf("Não há solução real para este delta \n");
    }
    if (delta > 0)
    {
        printf("Há duas soluções reais e diferentes para este delta \n");
    }
    if (delta == 0)
    {
        printf("Há apenas uma solução real para este delta \n");
    }

    return 0;
    
}