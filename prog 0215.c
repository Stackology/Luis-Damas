# include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 1000;

    printf("Introdusa um Caractere: ");
    scanf("%c", &num);

    printf("Foi introduzido %d cujo caractere '%c'\n", num,(char) num);
    return 0;
}
