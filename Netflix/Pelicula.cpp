#include "Pelicula.h"
using namespace std;

Pelicula::Pelicula(){
}


Pelicula::Pelicula(string _caracter, int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion):Video(_caracter, _idVideo, _titulo, _genero, _duracion, _calificacion )
{
  
}


string Pelicula::muestra(){
    return "\n\n\nEl carácter es: " + caracter + "\nEl Id es: " + to_string(idVideo) + "\nEl título es: " + titulo + "\nEl género es: " + genero + "\nLa duración es: " + to_string(duracion)+ " minutos" + "\nLa calificacion es: " + to_string(calificacion);
}