#ifndef Episodio_h
#define Episodio_h
#include <iostream>
#include <stdio.h>
#include <string>
#include "Video.h"
using namespace std;


class Episodio : public Video{
  private: 
    string serie;
    int numeroEp;
    int numTemporada;
    
  public: 

    Episodio();
    Episodio(string _caracter, int _idVideo, string _serie, string _genero, int _duracion,  int _calificacion, int _numeroEp, int _numTemporada);


    void setSerie(string _serie);
    void setnumeroEp(int _numeroEp);
    void setnumTemporada(int _numTemporada);

    string getSerie();
    int getNumeroEp();
    int getNumTemporada();


    //?Como ya se estipuló en la clase padre que "muestra()" es de carácter virtual, entonces ya está implícito
    //?que dicho método es polimórfico.

    string muestra();



};







#endif