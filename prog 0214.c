# include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Introdusa um inteiro: ");
    scanf("%d", &num);
    
    printf("Foi introduzido %d cujo caractere ´%c´\n", num,(char) num);

    printf("O caractere '%c' tem o valor ASCII %d\n", (char) (num+1), num+1);

    return 0;
}
