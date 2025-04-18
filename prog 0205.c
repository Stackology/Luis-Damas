# include <stdio.h>

/**
 * @brief Imprime o tamanho em bytes de varios tipos de dados
 *
 * @details Utiliza a fun o sizeof() para obter o tamanho em bytes de cada tipo
 * e imprime o resultado na tela
 *
 * @return 0
 */
int main(int argc, char const *argv[])
{
    printf("O tamanho em bytes de um float = %d\n", sizeof(float));
    printf("O tamanho em bytes de um double = %d\n", sizeof(double));
    printf("O tamanho em bytes de um long = %d\n", sizeof(long));
    printf("O tamanho em bytes de um long double = %d\n", sizeof(long double));
    printf("O tamanho em bytes de um long long = %d\n", sizeof(long long));
    printf("O tamanho em bytes de um char = %d\n", sizeof(char));
    printf("O tamanho em bytes de um short = %d\n", sizeof(short));
    printf("O tamanho em bytes de um int = %d\n", sizeof(int));
    printf("O tamanho em bytes de um long int = %d\n", sizeof(long int));
    
    return 0;
}
