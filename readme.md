# [Trabajo 1]
## Descripcion
* Este programa implementado en c++ ofrece un sistema que permite al usuario interactuar con una interfaz capaz de realizar  5 funciones, y ademas posee un sistema de login. Las funciones disponibles se ejecutan con parametros ingresados por el usuario al momento de ejecutar el programa.

## Requisitos
* -cpp (Debian 13.3.0-5) 13.3.0
* -Libreria ncurses
* -Compilardor g++
* -Makefile
* -Es necesario estar en la carpeta 'Trabajo1'

## Instalacion / Compilacion
* Para la instalacion de la libreria ncurses, ejecutar el comando:

sudo apt-get install libncurses5-dev libncursesw5-dev

(este comando es para sistemas ubuntu/debian)

-Para compilar el programa, se debe ejecutar por consola el comando "make"

## Ejecucion
* -Luego, para ejecutar el programa, se debe ejecutar por consola el comando ./programa -u "usuario" -p "contrasena" -v "vector" -n "numero" -t "frase"

Donde:

| Argumento | Descripcion |
| -------- | ----------- |
| u | Especifica el usuario,  debe tener solo letras y un largo minimo de 3 |
| p | Especifica la contraseña del usuario debe tener letras y/o numeros y un largo minimo de 6 |
| v | Vector de numeros enteros, este vector debe tener el formato "a1;a2;a3;...;an", donde a1,a2,a3,...,an son enteros, separados por ';'. El vector no debe tener espacios en blancos ni 
otros caracteres |
| n | Numero, puede ser entero o flotante, si es flotante decimal, debe estar separado por un '.'  |
| t | Frase puede tener cualquier caracter, ya sean numeros, letras o caracteres |

Todos los valores de los parametros deben ir entre ""


## Funciones
* El sistema es capaz de realizar 5 funciones:
1) detección de palíndromos
2) contar vocales
3) cantidad de letras en un texto
4) promedio y sumatoria de un vector
5) calcular f(x)=5x*x+1/x

Para las opciones 1,2 y 3 se usa la frase ingresada
Para la opcion 4 se utilizan los numeros del vector ingresado
para la opcion 5 se utiliza el numero ingresado