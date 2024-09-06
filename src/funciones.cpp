#include "includes.h"

//Esta funcion recibe un string y le quita los espacios en blanco
string transformarFrase(string frase){
    string fraseT;
    for(char i : frase){
        if(i!=' '){
            fraseT.push_back(tolower(i));
            
        }
    }
    return fraseT;
}

//Esta funcion revisa si una frase o palabra es palindrome o no, no se connsideran los espacios en blanco ni mayusculas
void esPalindromo(string frase, string fraseModificada){
    string revertido=fraseModificada;
    reverse(revertido.begin(), revertido.end());
    if(revertido==fraseModificada){
        printw("La frase \"%s\" es palindrome\n", frase.c_str());
        printw("Presione cualquier tecla para volver");
    }else{
        printw("La frase \"%s\" no es palindrome\n", frase.c_str());
        printw("Presione cualquier tecla para volver");
    }

}

//Esta funcion cuenta las vocales de una frase o palabra
void contarVocales(string frase, string fraseModificada){
    int c=0;
    for(char i : fraseModificada){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
            c=c+1;
    }
    printw("La frase \"%s\" tiene %d vocales\n", frase.c_str(), c);
    printw("Presione cualquier tecla para volver");
}

//Esta funcion cuenta las letras de una frase o palabra
void contarLetras(string frase, string fraseModificada){
    int c=0;
    for(char i : fraseModificada){
        if(isalpha(i))
            c=c+1;
    }
    printw("La frase \"%s\" tiene %d letras\n", frase.c_str(), c);
    printw("Presione cualquier tecla para volver");
}

//Esta funcion calcula la funcion f(x)=(5*x)*x+1/x para un numero flotante x, recibe un string con el numero
void calcularFuncion(string n){
    int puntos=0;
    //Si el numero tiene letras o mas de un '.' no se calcula la conversion, debido a formato invalido del numero
    for(char i : n){
        if(i=='.'){
            puntos++;
        }
        if(!isdigit(i) && i!='.'){
            printw("ERROR: Numero Invalido");
            printw("\nPresione cualquier tecla para volver");
            return;
        }
    }
    if(puntos>=2){
        printw("ERROR: Numero Invalido");
        printw("\nPresione cualquier tecla para volver");
        return;
    }
    //Intentamos realizar la conversion a flotante y calcular la funcion, si no se puede, capturamos el error
    try {
        float x = stof(n);
        if(x==0){
            printw("ERROR: No se puede dividir por 0");
            printw("\nPresione cualquier tecla para volver");
        }
        else{
            float f=(5*x)*x+1/x;
            printw("f(%f)=%f",x,f);
            printw("\nPresione cualquier tecla para volver");
        }
    } catch (const invalid_argument& e) {
        printw("Error: debe ingresar un numero" );
        printw("\nPresione cualquier tecla para volver");
        return;
    } catch (const out_of_range& e) {
        printw("Error: Número fuera de rango");
        printw("\nPresione cualquier tecla para volver");
        return;
    }
    
}

//Esta funcion calcula  el promedio y la suma de un vector de numeros enteros, recibe el string con el vector
void promedioYSuma(string numerosString){
    //Obtenemos vector de numeros
    vector<int> numeros;  //Vector para almacenar los números enteros
    string numero = "";     //String para ir almacenando numero a numero
    int i = 0;
    int largo = static_cast<int>(numerosString.size());
    if(numerosString[largo-1]==';'){
        printw("ERROR: FORMATO DE VECTOR  INVALIDO \nEL vector no puede terminar con ';'");
        printw("\nPresione cualquier tecla para volver");
        return;
    }
    while (i < largo ) {
        //Verificamos que lo que se este leyendo sea ';' o un digito, si lee otro caracter se captura el error
        if(!isdigit(numerosString[i]) && numerosString[i]!=';'){
            printw("FORMATO DE VECTOR  INVALIDO \nNo puede utilizar esta opcion");
            printw("\nPresione cualquier tecla para volver");
            return;
        }
        if (numerosString[i] == ';') {  // Si encontramos un punto y coma añadimos el numero actual al vector
            if (!numero.empty()) {  // Verificar que haya algo en numero
                try {
                    int num = stoi(numero);  //Intentamos convertir a int
                    numeros.push_back(num);    // Añadimos el numero al vector
                    numero = "";  // Reiniciamos el string con un string vacio para pasar al siguiente numero
                } catch (const out_of_range& e) {
                    printw("Error: Número %d",numero," del vector fuera de rango, NO PUEDE EJECUTAR ESTA OPCION ");
                    return;
                }catch (const invalid_argument& e) {
                    printw("ERROR: FORMATO DE VECTOR INVALIDO, NO PUEDE EJECUTAR ESTA OPCION.");
                    return;
                }
            }else{ //Este caso servira para verificar que no hayan dos o mas ';' seguidos, o que no empiece con ';'
                printw("ERROR: FORMATO DE VECTOR  INVALIDO, NO PUEDE EJECUTAR ESTA OPCION");
                return;
            }
        } else {
            numero += numerosString[i];  // Añadir carácter a la cadena del número
        }
        i++;  // Avanzar al siguiente carácter
    }
    // Procesar el último número 
    if (!numero.empty()) {
        try {
            int num = stoi(numero);  // Convertir a int
            numeros.push_back(num);    // Añadir al vector
        } catch (const out_of_range& e) {
            printw("Error: Número %d",numero," del vector fuera de rango, NO PUEDE EJECUTAR ESTA OPCION ");
            return;
        }catch (const invalid_argument& e) {
            printw("ERROR: FORMATO DE VECTOR INVALIDO, NO PUEDE EJECUTAR ESTA OPCION.");
            return;
        }
    }else{ //Este caso servira para verificar que no termine con ';'
        printw("ERROR: FORMATO DE VECTOR  INVALIDO, NO PUEDE EJECUTAR ESTA OPCION");
        return;
    }
    //Si se pudo realizar la conversion del string a vector de enteros, se procede con el calculo del promedio y la suma
    float suma=0;
    for(int i : numeros){
        suma+=i;
    }
    float promedio=suma/numeros.size();
    printw("La suma de los numeros es: %f",suma);
    printw("\nEl promedio de los numeros es: %f",promedio);
    printw("\nPresione cualquier tecla para volver");
    return;
}