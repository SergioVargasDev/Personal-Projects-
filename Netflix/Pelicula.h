#ifndef Pelicula_h
#define Pelicula_h
#include <iostream>
#include <stdio.h>
#include <string>
#include "Video.h"
using namespace std;

class Pelicula: public Video{
  private: 

  public: 

    Pelicula();
    Pelicula(string _caracter, int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion);

    //?Como ya se estipuló en la clase padre que "muestra()" es de carácter virtual, entonces ya está implícito
    //?que dicho método es polimórfico.

    string muestra();
    
};







#endif