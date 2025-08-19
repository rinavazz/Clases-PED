#include <iostream>
#include <cstdlib>
#include <ctime>

std::string SolicitarDatos(){
    //Solicitar al usuario las letras del cupon
    std::string letras;
    std::cout << "Ingrese las letras del cupon:\n ";
    std::cin >> letras;

    //Validar si tiene 3 letras o no lenght()
    if (letras.length() != 3) {
        return "Error: Debe ingresar exactamente 3 letras.\n";
    }else{
        return letras
    }
   
}

std::string GenerarCupon(std::string identificador_letras){

    //Generar el numero aleatorio
    int numero_aleatorio = rand() % 100 + 999;

    // std::string conversion = std::to_string(numero_aletorio)

    //Concatenar el prefijo y el numero aleatorio 
    return identificador_letras+std::to_string(numero_aleatorio); // Convierto el entero a string (to_string)
}

void VerificarCupon(std::string cupon){
    
    //Dividir la parte numerica del cupon AGO 1098
    std::string num_extraido = cupon.substr(3,4);

    //Convertir de entero a string
    int conversion = std::stoi(num_extraido);

    //Validar si es par o no es par 
    if(conversion % 2 == 0){

        std::cout<< "\nTiene premio";
    }else{
        std::cout << "\nNo tiene premio";
    }

}


int main(){
    srand(time(0));

    std::string letras = SolicitarDatos();

    //Llamar a la funcion para generar cupon
    std::cout << "El cupon generado es: \n" << GenerarCupon("letras");

    std::string cupon_generado = GenerarCupon("letras");
    VerificarCupon(cupon_generado);

    return 0;
}
