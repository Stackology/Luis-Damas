# include <stdio.h>

/**
 * @brief Entry point of the program. Calculates and prints the perimeter and area of a circle
 *        based on the user-provided radius.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @return int Returns 0 upon successful execution.
 */

int main(int argc, char const *argv[])
{ 
    float  raio, perimetro;
    double area, pi = 3.14159f;

    printf("Intronduza o raio: \n");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("O perimetro e = %f\n", perimetro);
    printf("A area e = %f\n", area);
    return 0;
}