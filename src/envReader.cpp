#include "includes.h"

using namespace std;

// Función para cargar las variables de entorno desde un archivo .env
void readEnv(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo " << nombreArchivo << endl;
        exit(EXIT_FAILURE);
    }

    string linea;
    while (getline(archivo, linea)) {
        // Ignorar líneas vacías y comentarios
        if (linea.empty() || linea[0] == '#') {
            continue;
        }

        // Buscar el '=' que separa el nombre y el valor
        size_t pos = linea.find('=');
        if (pos == string::npos) {
            continue;
        }

        // Obtener nombre y valor de la variable
        string nombre = linea.substr(0, pos);
        string valor = linea.substr(pos + 1);

        // Eliminar comillas dobles si están presentes
        if (!valor.empty() && valor.front() == '"' && valor.back() == '"') {
            valor = valor.substr(1, valor.length() - 2);
        }

        // Establecer la variable de entorno
        setenv(nombre.c_str(), valor.c_str(), 1);
    }

    archivo.close();
}