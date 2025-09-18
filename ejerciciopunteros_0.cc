#include <iostream>

// Por puntero
void IntercambiarValoresPuntero(int *variable_uno, int *variable_dos);
// Por referencia 
void IntercambiarValoresReferencia(int &variable_uno, int &variable_dos); 
// Por valor 
void IntercambiarValoresPorValor(int variable_uno, int variable_dos);

int main() {
    int valor_uno, valor_dos;

    std::cout << "Primer valor: ";
    std::cin >> valor_uno;

    std::cout << "Segundo valor: ";
    std::cin >> valor_dos;
    std::cout << "\n";

    //Por puntero
    IntercambiarValoresPuntero(&valor_uno, &valor_dos);
    std::cout << "Intercambio por puntero\n";
    std::cout << "Primer valor: " << valor_uno << "\n";
    std::cout << "Segundo valor: " << valor_dos << "\n\n";

    //Poreferencia
    IntercambiarValoresReferencia(valor_uno, valor_dos);
    std::cout << "Intercambio por referencia\n";
    std::cout << "Primer valor: " << valor_uno << "\n";
    std::cout << "Segundo valor: " << valor_dos << "\n\n";

    //Por valor
    IntercambiarValoresPorValor(valor_uno, valor_dos);
    std::cout << "Intercambio por valor\n";
    std::cout << "Primer valor: " << valor_uno << "\n";
    std::cout << "Segundo valor: " << valor_dos << " (no cambió)\n\n";

    return 0;
}

// aqui ntercambio modificando las direcciones
void IntercambiarValoresPuntero(int *variable_uno, int *variable_dos) {
    int temporal = *variable_uno;
    *variable_uno = *variable_dos;
    *variable_dos = temporal;
}

//Aqui usa las variables de la forma en que el puntero las dejó
//intercambio directamente
void IntercambiarValoresReferencia(int &variable_uno, int &variable_dos) {
    int temporal = variable_uno;
    variable_uno = variable_dos;
    variable_dos = temporal;
}

// aquí no se intercambia el original, solo una copia local
void IntercambiarValoresPorValor(int variable_uno, int variable_dos) {
    int temporal = variable_uno;
    variable_uno = variable_dos;
    variable_dos = temporal;
}
