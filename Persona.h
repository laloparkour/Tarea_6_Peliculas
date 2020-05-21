//
// Created by Laloparkour on 20/05/2020.
//

#ifndef TAREA_6_PERSONA_H
#define TAREA_6_PERSONA_H


class Persona {
private:
    char nombre[100];
    char nacionalidad[100];
public:
    Persona();
    Persona(char [], char []);
    void toString();
};


#endif //TAREA_6_PERSONA_H
