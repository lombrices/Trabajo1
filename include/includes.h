// includes.h
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unistd.h>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <cctype> 
#include <algorithm> 


using namespace std;
//Interfaz
#include <curses.h>
#include <cstring>

//funciones
#ifndef INCLUDES_H
#define INCLUDES_H

// Declaración de funciones
void verificaClaves(string user, string password);
bool verificaLogin(string user1, string user2, string password1, string password2);
void launchInterfaz(string numeros,string frase, string x);
string transformarFrase(string frase);
void esPalindromo(string frase, string fraseModificada);
void contarVocales(string frase, string fraseModificada);
void contarLetras(string frase, string fraseModificada);
void promedioYSuma(string numerosString);
void calcularFuncion(string n);

void readEnv(const string& filename);

vector<int> extractVector(const string& numerosString);
#endif // INCLUDES_H



