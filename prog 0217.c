# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Introduza dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("A soma de %d e %d é %d\n", a, b, a+b);
    printf("A diferença de %d e %d é %d\n", a, b, a-b);
    printf("O produto de %d e %d é %d\n", a, b, a*b);
    printf("A divisão de %d e %d é %d\n", a, b, a/b);
    printf("O resto da divisão de %d e %d é %d\n", a, b, a%b);
    printf("A média de %d e %d é %.2f\n", a, b, (float)(a+b)/2);
    

    return 0;
}
