# include <stdio.h>
/**
 * @brief Programa que apresenta os caracteres da tabela ASCII
 *
 * @param argc Quantidade de argumentos passados para o programa
 * @param argv Vetor de strings com os argumentos passados para o programa
 *
 * @return int Retorna 0 se o programa for executado com sucesso
 */
int main(int argc, char const *argv[])
{
    printf("Programa que apresenta os caracteres da tabela ASCII\n");
    printf("Caracter\tDec\tHex\n");
    for(int i = 0; i < 256; i++){
        printf("%c\t\t%d\t0x%02x\n", i, i, i);
    return 0;
}