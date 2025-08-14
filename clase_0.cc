#include <iostream>

const float kPi = 3.1416;

//Ejercicio: Calcular un área de un circulo
// area = radio x radio x pi

    float CalcularAreaCirculo(float radio){

    return radio * radio * kPi;

}


int main(){

    float r = 0;
    std::cout << "Ingrese el radio del circulo:\n";
    std::cin >> r;

    std::cout << CalcularAreaCirculo(r);


    return 0;
}