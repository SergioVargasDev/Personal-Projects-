#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
using namespace std;

class Usuario {
  //?Aquí se estipulan concretamente los atributos el usuario

private:
  string cuenta;
  string nombre;
  //?Este vector es de carácter entero, para ir guardando los videos en sí.
  vector<int> misVideos;
  int contadorVideos;

public:
  Usuario();
  Usuario(string _cuenta, string _nombre, int _misVideos, int _contadorVideos);

  void setCuenta(string _cuenta);
  void setNombre(string _nombre);
  void setMisVideos(vector<int> _misVideos);
  void setContadorVideos(int _contadorVideos);

  string getCuenta();
  string getNombre();
  vector<int> getMisVideos();
  int getContadorVideos();

  void agregarVideo(int idVideo);

  string imprimir();
};

#endif

