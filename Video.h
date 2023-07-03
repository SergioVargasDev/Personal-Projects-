#ifndef Video_h
#define Video_h
#include "Usuario.h"
#include <iostream>
#include <stdio.h>
#include <string>

class Video
{

//?Aqui los atributos son de carácter "protected", esto debido a que serán utilizados en las otras clases 
//?para la función polimórfica "imprimir". Se pudiera utilizar "private"; sin embargo, esto haría más intrincado 
//?el acceder a dichos atributos, pero en sí sería con "setters y getters"
  protected: 
    string caracter;
    int idVideo;
    string titulo;
    string genero;
    int duracion;
    int calificacion;


  public: 

  Video();
  Video(string _caracter, int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion);
  Video(string _caracter, int _idVideo, string _genero, int _duracion, int _calificacion);

  

  void setCaracter(string _caracter);
  void setIdVideo(int _idVideo);
  void setTitulo(string _titulo);
  void setGenero(string _genero);
  void setDuracion(int _duracion);
  void setCalificacion(int _calificacion);

  string getCaracter();
  int getIdVideo();
  string getTitulo();
  string getGenero();
  int getDuracion();
  int getCalificacion();

  //?Esta función es de carácter "virtual", ya que es la que tendrá el mismo nombre para las otras clases. Sólo
  //?se estipulará que es virtual en la clase padre. 
  
  virtual string muestra();

};


#endif