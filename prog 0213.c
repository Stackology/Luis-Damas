# include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("O caractere '%c' tem o valor ASCII %d\n", ch, ch);

    
    return 0;
}
