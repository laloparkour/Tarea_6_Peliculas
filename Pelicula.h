//
// Created by Laloparkour on 20/05/2020.
//

#ifndef TAREA_6_PELICULA_H
#define TAREA_6_PELICULA_H


#include "Persona.h"

class Pelicula {
private:
    char nombre[100]{};
    Persona director{};
    int annio;
    char genero[100]{};
    char productora[100]{};
    int minutos;
public:
    Pelicula();
    Pelicula(char [], Persona, int, char[], char [], int);
    void update(char [], Persona, int, char[], char [], int);
    void eliminar();
    char getTitulo();
    void getDirector();
    void toString();
};


#endif //TAREA_6_PELICULA_H
