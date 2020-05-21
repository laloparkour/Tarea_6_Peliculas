//
// Created by Laloparkour on 20/05/2020.
//

#include "Persona.h"
#include <cstring>
#include <iostream>

using namespace std;

Persona::Persona() {}

Persona::Persona(char nombre[100], char nacionalidad[100]) {
    strcpy(this->nombre, nombre);
    strcpy(this->nacionalidad, nacionalidad);
}

void Persona::toString() {
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Nacionalidad: "<<this->nacionalidad<<endl;
}