#include <stdio.h>

int main(){
    int n;

    printf("Digite um valor número inteiro N: ");
    scanf("%d", &n);
    if (n>=0)
    {
        printf("Esse número positivo é %d", n);
    }
    if (n<0)
    {
        int modulo = n * -1;
         printf("Esse número positivo é %d", modulo);
    }
    return 0;
}