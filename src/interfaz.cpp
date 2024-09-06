#include "includes.h"

using namespace std;

//Funcion para lanzar la interfaz
void launchInterfaz(string numeros,string frase, string x) {
    //Quitamos los espacios de la frase
    string fraseModificada=transformarFrase(frase);
    
    // Inicializa ncurses
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    refresh();

    int funcion;

    while(true){
        clear();
        
        printw("Menú");
        printw("\n");
        printw("1.) Detección de palíndromos");
        printw("\n");
        printw("2.) Contar vocales");
        printw("\n");
        printw("3.) Cantidad de letras en un texto");
        printw("\n");
        printw("4.) Promedio y sumatoria de un vector");
        printw("\n");
        printw("5.) Calcular f(x)=5x*x+1/x");
        printw("\n");
        printw("6.) Salir");
        printw("\n");
        printw("Presione el numero de la opción que desea realizar \n");

        refresh(); // Actualiza la pantalla para mostrar el menú

        funcion = getch(); // Lee la entrada del usuario

        switch(funcion){
            case '1':
                esPalindromo(frase, fraseModificada);
                break;
            case '2':
                contarVocales(frase, fraseModificada);
                break;
            case '3':
                contarLetras(frase, fraseModificada);
                break;
            case '4':
                promedioYSuma(numeros);
                break;
            case '5':
                calcularFuncion(x);
                break;
            case '6':
                // Salir
                endwin(); // Finaliza la interfaz ncurses
                return; // Sale de la función
        }
        refresh();
        getch(); // Espera a que el usuario presione otra tecla para salir

        //endwin(); 
    }
}