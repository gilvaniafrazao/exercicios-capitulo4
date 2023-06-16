#include <stdio.h>

int main(){
    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);

    if (a%2 == 0)
    {
        printf("Esse número é par");
    }
    else
    {
        printf("Esse número é ímpar");
    }
    return 0;
}