# include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    printf("introdura um número inteiro: ");
    scanf("%d", &x);
 
    if (x>=0)
        printf("O número %d é positivo\n", x);
    else
        printf("O número %d é negativo\n", x);
    

    return 0;
}
