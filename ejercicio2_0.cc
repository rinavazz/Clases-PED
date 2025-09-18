#include <iostream>
#include <string>
#include <vector>

struct Serie {
    int horas_vistas;
    float pago_vistas;
    float ingreso_generado;
    std::string titulo_serie;
    std::string genero_serie;
};

std::vector<Serie> vector_series;

// Función para solicitar datos de una serie
Serie SolicitarDatos() {
    Serie info_serie; 
    std::cin.ignore(); // limpiar buffer antes de getline

    std::cout << "Ingrese el titulo de la serie: ";
    std::getline(std::cin, info_serie.titulo_serie);

    std::cout << "Ingrese el genero de la serie: ";
    std::getline(std::cin, info_serie.genero_serie);

    std::cout << "Ingrese horas vistas: ";
    std::cin >> info_serie.horas_vistas;

    std::cout << "Ingrese pago por hora vista: ";
    std::cin >> info_serie.pago_vistas;

    // Calcular ingreso generado
    info_serie.ingreso_generado = info_serie.horas_vistas * info_serie.pago_vistas;

    return info_serie;
}

// Función para mostrar todas las series
void MostrarSeries(const std::vector<Serie>& series) {
    std::cout << "\n--- Lista de Series ---\n";
    for (size_t i = 0; i < series.size(); i++) {
        std::cout << "\nSerie #" << i+1 << "\n";
        std::cout << "Titulo: " << series[i].titulo_serie << "\n";
        std::cout << "Genero: " << series[i].genero_serie << "\n";
        std::cout << "Horas vistas: " << series[i].horas_vistas << "\n";
        std::cout << "Pago por hora: " << series[i].pago_vistas << "\n";
        std::cout << "Ingreso generado: " << series[i].ingreso_generado << "\n";
    }
}

int main() {
    int n;
    std::cout << "Cuantas series desea ingresar? ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "\n--- Serie #" << i+1 << " ---\n";
        Serie nueva = SolicitarDatos();
        vector_series.push_back(nueva);
    }

    MostrarSeries(vector_series);

    return 0;
}
