#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Struct para el cantante
struct Cantante {
    std::string nombre;
    std::string nacionalidad;
};

// Struct para el álbum
struct Album {
    std::string nombre_album;
    int anio_lanzamiento;
    int antiguedad;
    Cantante artista;                     // Estructura anidada para el cantante
    std::vector<std::string> canciones;   // Vector de títulos de canciones
};


// Función para solicitar datos del álbum
Album SolicitarDatos() {
    Album nuevo_album;
    int cantidad_canciones;

    std::cout << "Ingrese el nombre del album: ";
    std::getline(std::cin, nuevo_album.nombre_album);

    std::cout << "Ingrese el anio de lanzamiento: ";
    std::cin >> nuevo_album.anio_lanzamiento;
    std::cin.ignore();

    // Datos del cantante
    std::cout << "Ingrese el nombre del cantante: ";
    std::getline(std::cin, nuevo_album.artista.nombre);

    std::cout << "Ingrese la nacionalidad del cantante: ";
    std::getline(std::cin, nuevo_album.artista.nacionalidad);

    // Canciones
    std::cout << "Ingrese la cantidad de canciones: ";
    std::cin >> cantidad_canciones;
    std::cin.ignore();

    for (int i = 1; i <= cantidad_canciones; i++) {
        std::string titulo;
        std::cout << "Ingrese el titulo de la cancion #" << i << ": ";
        std::getline(std::cin, titulo);
        nuevo_album.canciones.push_back(titulo);
    }

    return nuevo_album;
}

int main() {
    Album miAlbum = SolicitarDatos();

    return 0;
}
