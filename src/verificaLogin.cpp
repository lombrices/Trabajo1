#include "includes.h"
void verificaClaves(string user, string password){
    //Verificamos que el nombre de usuario tenga al menos 3 caracteres
    if(size(user)<3){
        cout << "Usuario invalido \nSaliendo del programa....";
        exit(1);
    }

    //Verificamos que el nombre de usuario solo tenga letras
    for(char i : user){
        if(!isalpha(i)){
            cout << "Usuario invalido \nSaliendo del programa.....";
            exit(1);
        }
    }

    //Verificamos que la contraseña de usuario tenga al menos 6 caracteres
    if(size(password)<6){
        cout << "Usuario invalido\nSaliendo del programa.....";
        exit(1);
    }

    //Verificamos que la contraseña solo tenga letras y numeros
    for(char i : password){
        if(!isalpha(i) && !isdigit(i)){
            cout << "Usuario invalido \nSaliendo del programa.....";
            exit(1);
        }
    }
}

bool verificaLogin(string user1, string user2, string password1, string password2){
    if(user1!=user2 || password1!=password2){
        cout << "Nombre de usuario y/o contraseña incorrecto" << endl;
        return false;
    }
    return true;
}
