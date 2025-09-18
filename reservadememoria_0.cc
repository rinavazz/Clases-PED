#include <iostream>

int main(){


    /*int numero = 99; 

    int lista_numero[] = {1,2,3,4,5};
    int *ptr_arreglo = lista_numero; 

    int *fin = lista_numero + (sizeof(lista_numero) / sizeof(lista_numero[0]));

    while (ptr_arreglo < fin) {
        std::cout << "Direccion: " << ptr_arreglo 
                  << " | Valor: " << *ptr_arreglo << "\n";
        ptr_arreglo++; // Avanzar al siguiente elemento
    }

    //Reserva de memoria 
    int *ptr = new int;
    //Liberar memoria
    delete ptr;
    //Apuntar a nullptr (queda limpio)
    ptr = nullptr;

    if(ptr == nullptr){
        std::cout << "Error de asignacion de memoria";

    }else{
        std::cout << "Direccion de memoria asginada: " << ptr;
    }

    //Variable sola
    std::cout << "\nDir de memoria numero: " << &numero << "\n";*/


    /*Escribir un programa que solicite los precios de n cantidad de productos, almacenados en un arreglo float los sume
    y obtenga el promedio
    - Utilizar arreglo y los operadores new/delete
    - Solicitar al usuario los datos (precio)
    - Mostrar las direciones de memoria de los precios*/

   
    
    int cantidad_productos;
    std::cout << "Ingresar la cantidad de productos: ";
    std::cin >> cantidad_productos; 

    float *precios = new float [cantidad_productos];
    float suma;
    int i = 0;

    while(i < cantidad_productos){
        std::cout << "Ingrese el precio del producto: ";
        std::cin >> precios[i];
        suma += precios[i];
        i++;
    }

    std::cout << "El promedio de los precios es:" << suma << "\n";

    float *ptr_precios = precios; 
    
    float *fin = precios + (sizeof(precios) / sizeof(precios[0]));
    
    while (ptr_precios < fin) {
        std::cout << "Direccion: " << ptr_precios 
                  << " | Valor: " << *ptr_precios << "\n";
        ptr_precios++; // Avanzar al siguiente elemento
    }

    



    



    return 0; 
}