# include <stdio.h>

int main(int argc, char const *argv[])
{
    int x ;


    printf("Introduza um número inteiro: ");
    scanf("%d", &x);
    if (x!=0)
        printf("O número %d é diferente de zero\n", x);
    else
        printf("O número %d é igual a zero\n", x);


    return 0;
}
