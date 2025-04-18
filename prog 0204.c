# include <stdio.h>
/**
 * @brief Prints the size of an int in bytes to the console.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    printf("O tamanho em bytes de um int = %d\n", sizeof(int));
    return 0;
}