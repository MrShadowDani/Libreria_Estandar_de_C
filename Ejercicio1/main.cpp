#include <iostream>
#include <cstdlib>
#include <random>

int main() {
    // Declarar un número
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = std::abs(num);

    std::cout << "El valor absoluto de " << num << " es " << abs_num << std::endl;

    // Generar un número aleatorio utilizando la biblioteca de C++11
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100); // Rango de números aleatorios (1 a 100)

    int random_number = dis(gen);
    std::cout << "Numero aleatorio: " << random_number << std::endl;

    return 0;
}
