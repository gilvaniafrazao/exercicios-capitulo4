#include <stdio.h>

int main(){
    char nome[50];
    char sexo;

    printf("Qual é o seu nome? ");
    scanf("%s", nome);
    printf("Qual é o seu sexo? Responda M para masculino ou F para feminino: ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo!= 'F')
    {
        printf("Sexo informado inválido \n");
    }
    else
    {
        if (sexo == 'M')
        {
            printf("Ilmo. Sr. %s \n", nome);
        }
        else
        {
        printf("Ilma. Sra. %s \n", nome);
        }
    }
    return 0;
}