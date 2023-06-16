#include<stdio.h>

int main(){
    int a,b,c,d,e;

    printf("Insira um valor inteiro A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro B: ");
    scanf("%d", &b);
    printf("Insira um valor inteiro C: ");
    scanf("%d", &c);
    printf("Insira um valor inteiro D: ");
    scanf("%d", &d);
    printf("Insira um valor inteiro E: ");
    scanf("%d", &e);

    printf("O maior número e o menor número, respectivamente: ");

    //encontrando o maior número
    if (a>b && a>c && a>d && a>e)
    {
        printf("%d ", a);
    }
    if (b>a && b>c && b>d && b>e)
    {
        printf("%d ", b);
    }
    if (c>a && c>b && c>d && c>e)
    {
        printf("%d ", c);
    }
    if (d>a && d>b && d>c && d>e)
    {
        printf("%d ",d);
    }
    if (e>a && e>b && e>c && e>d)
    {
        printf("%d ",e);
    }

    //encontrando o menor número
    if (a<b && a<c && a<d && a<e)
    {
        printf("e %d", a);
    }
    if (b<a && b<c && b<d && b<e)
    {
        printf("e %d", b);
    }
    if (c<a && c<b && c<d && c<e)
    {
        printf("e %d", c);
    }
    if (d<a && d<b && d<c && d<e)
    {
        printf("e %d",d);
    }
    if (e<a && e<b && e<c && e<d)
    {
        printf("e %d",e);
    }
    
}