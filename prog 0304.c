# include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario;

    printf("Introduza o salário: ");
    scanf("%f", &salario);

    if (salario < 10000)
    {
        salario = salario + 1000;
        printf("O salário com o aumento é: %.2f\n", salario);
    }
    

    return 0;
}
