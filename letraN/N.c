#include <stdio.h>

int main(){
    int a,b,c, resultado;

    printf("Insira um valor inteiro A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro B: ");
    scanf("%d", &b);
    printf("Insira um valor inteiro C: ");
    scanf("%d", &c);

    resultado = a + b + c;

    if (resultado>= 100)
    {
        printf("O resultado da soma é %d", resultado);
    }
    return 0;

}