#include <iostream>

int main() {
    // Declarar un arreglo de enteros
    int array_num[] = {10, 20, 30, 40, 50};

    // Puntero que apunta al primer elemento del arreglo
    int *ptr = array_num;

    // Puntero al final (uno después del último elemento)
    int *fin = array_num + (sizeof(array_num) / sizeof(array_num[0]));

    // Recorrido con while sin usar índices
    while (ptr < fin) {
        std::cout << "Direccion: " << ptr 
                  << " | Valor: " << *ptr << "\n";
        ptr++; // Avanzar al siguiente elemento
    }

    return 0;
}
