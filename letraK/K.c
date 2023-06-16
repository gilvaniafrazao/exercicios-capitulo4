#include<stdio.h>

int main(){

    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);

    if (a>=1 && a<=9)
    {
        printf("O valor está na faixa permitida \n");
    }
    else
    {
        printf("O valor está fora da faixa permitida");
    }
    return 0;
}