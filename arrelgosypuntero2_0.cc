#include <iostream>

int main() {

    // Declarar un arreglo tipo entero 
    int arreglo_num[3] = {1, 2, 3};
    int *ptr = arreglo_num;

    std::cout << "Peso de un dato int: " << sizeof(int) << " bytes\n";

    // Obtener direccion de memoria de un arreglo
    std::cout << "Dir de memoria arreglo_num[0]: " << arreglo_num << "\nValor: "<< *(arreglo_num) << "\n";
    std::cout << "Dir de memoria arreglo_num[1]: " << &arreglo_num[1] << "\nValor: " << *(arreglo_num) + 1 <<"\n"; 

    std::cout << "Dir de memoria arreglo_num[2]: " << ptr+2 << "\nValor: "<< *(ptr + 2) << "\n";

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
