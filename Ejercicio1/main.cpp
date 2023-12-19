#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declarar un número
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    // Generar un número aleatorio
    srand(time(NULL));
    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}
