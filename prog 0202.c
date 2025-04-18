# include <stdio.h>
/**
 * @brief Entry point of the program. Prints "Intronduza um numero: \n" and
 *        "O valor de num = <num>\n" to the console.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    int num;

    printf("Intronduza um numero: \n");
    scanf("%d", &num);

    printf("O valor de num = %d\n");
    return 0;
}