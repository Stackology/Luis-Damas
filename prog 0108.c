# include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("PRograma que apresenta os caracteres da tabela ASCII\n");
    printf("Caracter\tDec\tHex\n");
    for(int i = 0; i < 256; i++){
        printf("%c\t\t%d\t0x%02x\n", i, i, i);
    return 0;
}