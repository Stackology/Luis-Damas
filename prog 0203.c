# include <stdio.h>
/**
 * @brief Entry point of the program. Prints "Intronduza dois numeros: \n" and
 *        "O valor de n1 = <n1> e o valor de n2 = <n2>\n" to the console.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Intronduza dois numeros: \n");
    scanf("%d%d", &n1, &n2);

    printf("O valor de n1 = %d e o valor de n2 = %d\n", n1, n2);
    
    return 0;
}