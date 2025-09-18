#include <iostream>

void PasoPorValor(int taza);
void PasoPorPuntero(int *taza); //direccion por puntero
void PasoPorReferencia(int &taza); //direccion exacta

int main() {

    /*int num = 500;

    int *ptr = &num; //nullptr;//

    *ptr = 800;
    num = 1000;

    std::cout << "Dir. de memomoria num " << ptr << " - " << &num << "\n";
    std::cout << "Dir. de memoria ptr " << &ptr << "\n";
    std::cout << "Valor de num: " << *ptr << "\n";*/

    int taza = 0;
    
    std::cout << "Contenido taza " << taza << "\n"; //0
    PasoPorValor(taza); //100
    std::cout << "Contenido taza " << taza << "\n"; //0

    PasoPorPuntero(&taza); //100
    std::cout << "Contenido taza " << taza << "\n"; //100 por puntero modifico el origen por eso sale 100

    PasoPorReferencia(taza); //200

    
    std::cout << "Contenido taza " << taza << "\n"; //200
    PasoPorValor(taza); //300
    std::cout << "Contenido taza " << taza << "\n"; //200

    return 0;
}

void PasoPorValor(int taza) {
    taza = taza + 100; 
    std::cout << "Contenido taza: " << taza << "\n";
}

void PasoPorPuntero(int *taza){
    *taza = *taza + 100;
    std::cout << "Contenido taza " << *taza << "\n";
}

void PasoPorReferencia(int &taza){
    taza = taza + 100;
    std::cout << "Contenido taza: " << taza << "\n";
}