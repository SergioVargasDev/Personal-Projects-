#include "Usuario.h"

Usuario::Usuario() {
  cuenta = "stvv2004";
  nombre = "Sergio Tomás Vargas Villarreal";
  contadorVideos = 10;
}

Usuario::Usuario(string _cuenta, string _nombre, int _misVideos, int _contadorVideos) {
  cuenta = _cuenta;
  nombre = _nombre;
  contadorVideos = _contadorVideos;
}

void Usuario::setCuenta(string _cuenta) {
  cuenta = _cuenta;
}

void Usuario::setNombre(string _nombre) {
  nombre = _nombre;
}

void Usuario::setMisVideos(vector<int> _misVideos) {
  misVideos = _misVideos;
}

void Usuario::setContadorVideos(int _contadorVideos) {
  contadorVideos = _contadorVideos;
}

string Usuario::getCuenta() {
  return cuenta;
}

string Usuario::getNombre() {
  return nombre;
}

vector<int> Usuario::getMisVideos() {
  return misVideos;
}

int Usuario::getContadorVideos() {
  return contadorVideos;
}

//?Aquí se puede ver que cuande se use el método agregarVideo, se realizará un "push_back" de carácter idVideo 
//?hacia el vector misVideos. 
void Usuario::agregarVideo(int idVideo) {
  misVideos.push_back(idVideo);
}

string Usuario::imprimir() {
  string output = "\n\nLa cuenta es: " + cuenta + "\n";
  output += "El nombre es: " + nombre + "\n";
  output += "Tus videos son: " + to_string(misVideos.size()) + "\n";
  output += "El contador de videos es: " + to_string(contadorVideos);
  return output;
}

