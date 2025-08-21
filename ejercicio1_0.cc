#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

std::string SolicitarDatos(){
    //Solicitar al usuario las letras del cupon
    std::string prefijo;

    //Validar hasta que tenga 3 letras
    do
    { 
        std::cout << "Ingrese las letras del cupon (3 letras):\n ";
        std::cin >> prefijo;

        //Validar si tiene 3 letras o no lenght()
        if (prefijo.length() != 3) {
            std::cout << "Error: Debe ingresar exactamente 3 letras.\n";
        } else {
            return prefijo; 
        }
    } while(true);
}

std::string GenerarCupon(std::string identificador_letras){
    //Generar el numero aleatorio
    int numero_aleatorio = rand() % 9000 + 1000; // 4 dígitos

    //Concatenar el prefijo y el numero aleatorio 
    return identificador_letras + std::to_string(numero_aleatorio); // Convierto el entero a string (to_string)
}

void VerificarCupon(std::string cupon){
    //Dividir la parte numerica del cupon AGO 1098
    std::string num_extraido = cupon.substr(3,4);

    //Convertir de string a entero
    int conversion = std::stoi(num_extraido);

    //Validar si es par o no es par 
    if(conversion % 2 == 0){
        std::cout << "\nTiene premio";
    }else{
        std::cout << "\nNo tiene premio";
    }
}

int main(){
    srand(time(0));

    //Solicitar la cantidad de cupones a generar y almacenar en un arreglo 
    int cantidad_cupones;
    std::cout << "Ingresa cantidad de cupones a generar:\n";
    std::cin >> cantidad_cupones;

    std::vector<std::string> cupones_generados(cantidad_cupones); // arreglo dinámico de strings

    for(int i = 0; i < cantidad_cupones; i++){
        //Llamar a la funcion para generar cupon y solicitar datos
        cupones_generados[i] = GenerarCupon(SolicitarDatos());
    }

    //Mostrar los cupones generados y verificar cada uno
    for(int i = 0; i < cantidad_cupones; i++){
        std::cout << "Cupon generado: " << cupones_generados[i];
        VerificarCupon(cupones_generados[i]);
        std::cout << "\n";
    }

    return 0;
}
