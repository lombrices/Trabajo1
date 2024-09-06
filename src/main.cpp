#include "includes.h"


//CARGAR LAS VARIABLES DE ENTORNO ANTES!!!!!!! CON export $(grep -v '^#' .env | xargs)
using namespace std;

int main(int argc, char **argv){

    int c;
    //VARIABLES DE ENTORNO
    readEnv(".env"); //Leemos el archivo env
    const char* userENV = getenv("USER");
    const char* passwordENV = getenv("PASSWORD");

    //Verificamos si las variables de entorno se leyeron correctamente
    if (userENV == nullptr || passwordENV == nullptr) {
        cerr << "Variables de entorno no definidas" << endl;
        return EXIT_FAILURE;
    }
    
    //PARAMETROS 
    string username,pass,frase,numeros,x;
    //Leemos los parametros
    while ((c = getopt(argc, argv, "u:p:t:v:n:")) != -1) {
        switch (c) {
            case 'u':
                username = optarg;
                break;
            case 'p':
                pass = optarg;
                break;
            case 't':
                frase = optarg;
                break;
            case 'v':
                numeros = optarg;
                break;
            case 'n':
                x = optarg;
                break;   
      }
    }
    //Si faltan parametros no se lanza el programa
    if(username.empty() || pass.empty() || frase.empty() || numeros.empty() || x.empty()){
        cout << "Faltan parametros\nSaliendo del programa.....";
        exit(1);
    }

    //Se verifica si el usuario y la contraseña cumplen con lo pedido
    verificaClaves(username,pass);

    string userStrENV=userENV;
    string passwordStrENV=passwordENV;

    //Verifica si el user y la contraseña ingresadas son correctos
    if(verificaLogin(userStrENV,username,passwordStrENV,pass)==false){
        return EXIT_FAILURE;
    }
    
    cout << "Login correcto";
    
    //lanzar interfaz
    launchInterfaz(numeros,frase,x);
    return EXIT_SUCCESS;
}