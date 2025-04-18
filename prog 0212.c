# include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch1, ch2;
    printf  ("Introduza um caracteres: ");
    scanf("%c", &ch1);
    printf("Introduza outro caracter: ");
    scanf(" %c", &ch2); // O espaço antes de %c ignora os espaços em branco
    printf("Os caracteres introduzidos foram: %c e %c\n", ch1, ch2);

    return 0;
}
