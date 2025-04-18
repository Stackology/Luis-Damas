# include <stdio.h>
/**
 * @brief Prints a menu with the options Client, Employee, Manager, Provider, Invoice and Exit.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[])
{
    printf("1 -\t Cliente\n");
    printf("2 -\t Funcionario\n");
    printf("3 -\t Gerente\n");
    printf("4 -\t Fornecedor\n");
    printf("5 -\t Fatura\n");
    printf("6 -\t Sair\n");
    return 0;
}