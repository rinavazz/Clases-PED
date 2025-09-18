#include <iostream>
#include <string>

// Declarar estructura 
struct Atleta {
    std::string nombre; 
    float estatura;  
    float peso;      
    float imc;       
};

// Función para solicitar datos 
Atleta SolicitarDatos() {
    Atleta atleta;
    std::cout << "Ingrese nombre: ";
    std::cin >> atleta.nombre; 

    std::cout << "Ingrese estatura: ";
    std::cin >> atleta.estatura;

    std::cout << "Ingrese peso: ";
    std::cin >> atleta.peso;

    std::cin.ignore();

    return atleta;
}

// Función que calcula el imc 
float CalcularINC(float peso, float estatura) {
    if (estatura <= 0) return 0; // evitar división por cero
    return peso / (estatura * estatura);
}

int main() {
    Atleta atleta = SolicitarDatos();

    // Declarar un puntero al atleta
    Atleta *ptr_atleta = &atleta;

    // Calcular el índice y asignarlo al campo inc
    ptr_atleta->imc = CalcularINC(ptr_atleta->peso, ptr_atleta->estatura);

    // Mostrar resultados
    std::cout << "\nDatos del Atleta   \n";
    std::cout << "Nombre: " << ptr_atleta->nombre << "\n";
    std::cout << "Estatura: " << ptr_atleta->estatura << " m\n";
    std::cout << "Peso: " << ptr_atleta->peso << " kg\n";
    std::cout << "IMC: " << ptr_atleta->imc << "\n";

    return 0;
}
