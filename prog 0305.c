# include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, tmp;

    printf("introd. dois num. inteiros: ");
    scanf("%d %d", &x, &y);

    if (x>y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d %d\n", x, y);

    return 0;
}
