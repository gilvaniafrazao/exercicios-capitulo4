#include <stdio.h>

int main(){
    int valor, resultado;

    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);
    resultado = valor * 2;

    if (resultado>30)
    {
        printf("Esse número vezes 2 é igual a %d", resultado);
    }
    return 0;
}