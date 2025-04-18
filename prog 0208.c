# include <stdio.h>

int main(int argc, char const *argv[])
{
    float quilos = 1.0E3;
    float gramas = 1.0E-3;
    float n_toneladas;

    printf("Quantas toneladas comprou?\n");
    scanf("%f", &n_toneladas);

    printf("N de quilos: %f = %E\n", n_toneladas * quilos, n_toneladas * quilos);

    printf("N de gramas: %f = %E\n", quilos * n_toneladas, quilos * n_toneladas);
}