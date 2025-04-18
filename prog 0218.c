# include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n_segundos;

    printf("Digite o número de segundos: ");
    scanf("%ld", &n_segundos);

    printf("Horas: %ld\n", n_segundos / 3600);
    printf("Minutos: %ld\n", (n_segundos % 3600) / 60);
    printf("Segundos: %ld\n", n_segundos % 60);

    return 0;
}
