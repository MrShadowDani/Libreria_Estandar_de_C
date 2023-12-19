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

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}
