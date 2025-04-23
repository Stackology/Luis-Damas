# include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario;

    printf("Qual  o seu salario? ");
    scanf("%f", &salario);

    if (salario < 0 )
        printf("Salario: Valor Invalidado\n");
    if (salario > 1000)
        printf("imposto = %.2f\n", salario*0.10);
    else
        printf("imposto = %.2f\n", salario*0.05);
    return 0;
}
