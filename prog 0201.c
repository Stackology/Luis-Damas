# include <stdio.h>
/**
 * @brief Entry point of the program. Prints "O valor de num = 123 e o valor 
 *        seguinte = 124" to the console.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    int num = 123;

    printf("O valor de num = %d e o valor seguinte = %d\n", num, num + 1);
    
    return 0;
}