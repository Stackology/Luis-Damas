# include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int x, y;

    printf("Introduza dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("O resultado de %d == %d : %d\n",x, y, x == y);
    printf("O resultado de %d != %d : %d\n",x, y, x != y);
    printf("O resultado de %d > %d : %d\n",x, y, x > y);
    printf("O resultado de %d < %d : %d\n",x, y, x < y);
    printf("O resultado de %d >= %d : %d\n",x, y, x >= y);
    printf("O resultado de %d <= %d : %d\n",x, y, x <= y);
    printf("O resultado de %d && %d : %d\n",x, y, x && y);
    printf("O resultado de %d || %d : %d\n",x, y, x || y);


    return 0;
}
