#include <iostream>
#include "Pelicula.h"

using namespace std;

void menu(){
    cout<<"\n\t\tMenu Principal"<<endl;
    cout<<"1. Registrar"<<endl;
    cout<<"2. Editar"<<endl;
    cout<<"3. Eliminar"<<endl;
    cout<<"4. Consultar Director"<<endl;
    cout<<"5. Informacion"<<endl;
    cout<<"6. Salir"<<endl;
}

Pelicula registrarPelicula(){
    /*VARIABLES PELICULA*/
    char titulo[100];
    int annio;
    char genero[100];
    char productora[100];
    int minutos;

    /*VARIABLES DIRECTOR*/
    char nombre[100];
    char nacionalidad[100];

    cout<<"\n\t\t---Pelicula---"<<endl;
    cout<<"Ingresa el nombre: "; cin>>titulo;
    cout<<"Ingrese el annio: "; cin>>annio;
    cout<<"Ingrese el genero: "; cin>>genero;
    cout<<"Ingrese la productora: "; cin>>productora;
    cout<<"Duracion: "; cin>>minutos;

    cout<<"\n\t\t---Director---"<<endl;
    cout<<"Nombre: "; cin>>nombre;
    cout<<"Nacionalidad: "; cin>>nacionalidad;

    return Pelicula(titulo, Persona(nombre, nacionalidad), annio, genero, productora, minutos);
}

int main() {
    int opc;
    bool flag = true;
    int no;
    int movies = 0;
    Pelicula peliculas[10];

    while (flag){
        menu();
        cin>>opc;
        switch (opc) {
            case 1:
                cout<<"\n\t\t----Registro----"<<endl;
                peliculas[movies] = registrarPelicula();
                cout<<"Pelicula registrada con exito."<<endl;
                movies++;
                break;
            case 2:
                cout<<"\n\t\t----Editar datos de la pelicula----"<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                /*cout<<"Pelicula # "<<no<<". "<<peliculas[no].getTitulo()<<endl;*/
                peliculas[no] = registrarPelicula();
                cout<<"Dato corregido con exito."<<endl;
                break;
            case 3:
                cout<<"\n\t\t----Eliminar pelicula----"<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                /*cout<<"Pelicula # "<<no<<". "<<peliculas[no].getTitulo()<<endl;*/
                peliculas[no] = Pelicula();
                /*cout<<"Pelicula "<<peliculas[no].getTitulo()<<" eliminada con exito. "<<endl;*/
                cout<<"Pelicula eliminada con exito. "<<endl;
                break;
            case 4:
                cout<<"\n\t\t----Consultar director---"<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no].getDirector();
                break;
            case 5:
                cout<<"\n\t\t---Informacion---"<<endl;
                cout<<"Ingresa el numero de pelicula: "; cin>>no;
                peliculas[no].toString();
                break;
            default:
                flag = false;
                break;
        }
    }

    return 0;
}
