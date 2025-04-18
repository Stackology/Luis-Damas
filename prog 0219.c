# include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;

    printf("Introduza um número: ");
    scanf("%f", &x);

    printf("Parte inteira: %d\n", (int)x);
    printf("Parte decimal: %f\n", x - (int)x);


    return 0;
}
