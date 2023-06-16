#include <stdio.h>

int main(){

    float n1;
    float n2;
    float n3;
    float n4;
    float md1;

    printf("Insira a primeira nota N1: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota N2: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota N3: ");
    scanf("%f", &n3);
    printf("Insira a quarta nota N4: ");
    scanf("%f", &n4);

    md1 = (n1 + n2 + n3 + n4)/ 4;

    if (md1>=7)
    {
        printf("Aprovado \n");
    }
    else
    {
        float ne;

        printf("Insira a quinta nota: ");
        scanf("%f", &ne);

        float md2 = (ne + md1)/2;

        if (md2>=5)
        {
            printf("Aprovado em exame \n");
        }
        else
        {
            printf("Reprovado \n");
        }
        
    }
    printf("A média obtida pelo aluno foi %.2f \n", md1);

    return 0;
}