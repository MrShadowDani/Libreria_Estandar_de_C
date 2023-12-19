#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    char str[] = "Hola mundo";

    // Usar size_t para almacenar la longitud de una cadena
    size_t length = strlen(str);

    printf("La longitud de '%s' es: %zu\n", str, length);

    return 0;
}
