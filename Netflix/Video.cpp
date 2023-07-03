#include "Video.h"
using namespace std;

Video::Video(){
  idVideo = 1;
  titulo = "N/A";
  genero = "N/A";
  duracion = 1;
  calificacion = 5;
}

Video::Video(string _caracter, int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion){
  caracter = _caracter;
  idVideo = _idVideo;
  titulo  = _titulo;
  genero = _genero;
  duracion = _duracion;
  calificacion = _calificacion;
}


Video::Video(string _caracter, int _idVideo, string _genero, int _duracion, int _calificacion){
  caracter = _caracter;
  idVideo = _idVideo;
  genero = _genero;
  duracion = _duracion;
  calificacion = _calificacion;

}


void Video::setCaracter(string _caracter){
    caracter = _caracter;

}


void Video:: setIdVideo(int _idVideo){
  idVideo = _idVideo;
}


void Video::setTitulo(string _titulo){
  titulo = _titulo;
}
void Video:: setGenero(string _genero){
  genero = _genero;
}

void Video::setDuracion(int _duracion){
  duracion = _duracion;
}

void Video::setCalificacion(int _calificacion){
  calificacion = _calificacion;
}




string Video::getCaracter(){
  return caracter;


  }


int Video::getIdVideo(){
  return idVideo;
}

string Video::getTitulo(){
  return titulo;
}

string Video::getGenero(){
  return genero;
}

int Video::getDuracion(){
  return duracion;
}

int Video::getCalificacion(){
  return calificacion;
}

string Video::muestra(){
  return "El Id es: " + to_string(idVideo) + "\nEl título es: " + titulo + "\nEl género es: " + genero + "\nLa duración es: " + to_string(duracion) + " horas" +  "\nLa calificacion es: " + to_string(calificacion);

}

  




