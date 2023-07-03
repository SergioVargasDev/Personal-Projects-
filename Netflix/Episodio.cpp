#include "Episodio.h"
using namespace std;

Episodio::Episodio(){
  serie = "N/A";
  numeroEp = 1;
  numTemporada = 1;


}


Episodio::Episodio(string _caracter, int _idVideo, string _serie, string _genero, int _duracion,  int _calificacion, int _numeroEp, int _numTemporada):Video(_caracter, _idVideo, _genero, _duracion, _calificacion){
  serie = _serie;
  numeroEp = _numeroEp;
  numTemporada = _numTemporada;


  }





string Episodio::muestra(){
  return "\n\n\nEl carácter es: " + caracter + "\nEl Id es: " + to_string(idVideo) + "\nLa serie es: " + serie + "\nEl género es: " 
  + genero  + "\nLa duración es: " + to_string(duracion)+ " horas" + "\nLa calificacion es: " + to_string(calificacion)
  + "\nEl número de temporadas es: " + to_string(numTemporada) 
  + "\nEl número de episodios es: " + to_string(numeroEp);

}

  