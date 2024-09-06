#Descripcion del sistema
Este programa implementado en c++ ofrece un sistema que permite al usuario interactuar con una interfaz capaz de realizar  5 funciones, y ademas posee un sistema 
de login. Las funciones disponibles se ejecutan con parametros ingresados por el usuario al momento de ejecutar el programa.

##Requisitos
-cpp (Debian 13.3.0-5) 13.3.0
-Libreria ncurses
-Compilardor g++
-Makefile
-Es necesario estar en la carpeta 'Trabajo1'

##Instalacion y compilacion
Para la instalacion de la libreria ncurses, ejecutar el comando:

sudo apt-get install libncurses5-dev libncursesw5-dev

(este comando es para sistemas ubuntu/debian)

-Para compilar el programa, se debe ejecutar por consola el comando "make"

##Inicializacion del programa y parametros

-Luego, para ejecutar el programa, se debe ejecutar por consola el comando ./programa -u <usuario> -p <contrasena> -v <vector> -n <numero> -t <frase>

Donde:

<usuario>: nombre de usuario, el cual debe tener solo letras y un largo minimo de 3

<contrasena>: contrasena, la cual debe tener letras y/o numeros y un largo minimo de 6

<vector>: vector de numeros enteros, este vector debe tener el formato "a1;a2;a3;...;an", donde a1,a2,a3,...,an son enteros, separados por ';'. El vector no debe tener espacios en blancos ni 
otros caracteres

<numero>: es un numero el cual puede ser entero o flotante, si es flotante decimal, debe estar separado por un '.' 

<frase>: es una frase, puede tener cualquier caracter, ya sean numeros, letras o caracteres

Tanto el vector de numeros como la frase deben ir entre ""

##Funciones
El sistema es capaz de realizar 5 funciones:
1) detección de palíndromos
2) contar vocales
3) cantidad de letras en un texto
4) promedio y sumatoria de un vector
5) calcular f(x)=5x*x+1/x

Para las opciones 1,2 y 3 se usa la frase ingresada
Para la opcion 4 se utilizan los numeros del vector ingresado
para la opcion 5 se utiliza el numero ingresado

