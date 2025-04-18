# include <stdio.h>
/**
 * @brief Entry point of the program. Prints a beep to the console.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    printf("Aqui vai um apito\a \n");
    printf("Aqui vai um apito\7 \n");
    return 0;
}

/*\a - sinal sonoro */
/*\b - backspace */
/*\f - nova linha */
/*\n - nova linha */
/*\r - retorno de carro */
/*\t - tabulação */
/*\v - vertical tabulação */
