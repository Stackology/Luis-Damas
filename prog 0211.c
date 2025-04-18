# include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch1;

    printf("Introduza um caracter: ");
    ch1 = getchar();
    printf("O caracter introduzido foi: %c\n", ch1);
    // getchar(); // Limpa o buffer de entrada
    return 0;
}
