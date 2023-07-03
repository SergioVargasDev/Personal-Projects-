#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Pelicula.h"
#include "Episodio.h"
#include "Usuario.h"



using namespace std;

int main() {
  //?Se crea un objeto ifstream llamado archivo para abrir 
  //?el archivo de texto "datos.txt"
  ifstream archivo("datos.txt");  
  //?se declara una variable linea para almacenar cada línea leída del archivo
  string linea;
   //? Se crea un vector vació llamado listaVideos para almacenar las direcciones de los objetos de tipo Video. 
   //?Vector vacío de carácter puntero que apunta hacia direcciones de objetos de clase video Y consecuentemente  las guarda.
   //?El vector listaVideos se utiliza para almacenar punteros a objetos de la clase base Video,
   //?que pueden apuntar tanto a objetos de la clase Pelicula como de la clase Episodio. 
   //?Se optó por el uso de vectores debido a que un vector es aquella estrucura de datos a la que 
   //?se le puede modificar el tamaño en sí del mismo, cosa que se hará mediante pushbacks; en consecuencia, 
   //?no utilizamos listas debido a que tú cuando utlizas una lista debes estipular primenamente el 
   //? tamaño de la lista, por lo que no podremos manipularla de manera asequible como a un vector. 
  vector<Video*> listaVideos;

  //?se utiliza un bucle while para leer cada línea del archivo de texto, donde dicho bucle persistirá hasta que no haya 
  //?más lineas por leer en el archivo.

  //?Primeramente se estipula la función getline para que vaya leyendo cada línea del archivo de texto, posteriormente
  //?estipulamos el argumento de archivo, el cual en sí es nuestro archivo de texto y asimismo argumentamos la variable 
  //?linea, donde dicha variable sirve para guardar en sí cada línea del archivo de texto.

  while (getline(archivo, linea)) {

    //?Aquí se crea un objeto de tipo stringstream llamado ss. 
    //?stringstream es una clase que permite operar con cadenas de texto de manera similar a un flujo de entrada. 
    //?Se inicializa con la línea leída del archivo (linea), lo que permite manipular esa línea como un flujo de entrada.
    stringstream ss(linea);

    //?Se declaran las variables elemento y elementos. elemento se utiliza para almacenar cada elemento separado 
    //?por comas en la línea, mientras que elementos es un vector vació que almacena en si todos los elementos de la línea, 
    //?por ello se estipula que es de carácter string
    string elemento;
    vector<string> elementos;

    //?En este bucle while, lo que se estipula en sí es reiteradamente la función getline() en el objeto ss 
    //?(objeto para operar con cadenas de texto) para leer cada elemento separado por comas 
    //?en la línea. La función getline() extrae los elementos hasta encontrar una coma (indicada por el tercer parámetro ,) 
    //?y los almacena en la variable elemento. 


    while (getline(ss, elemento, ',')) {
    //?Luego, el elemento se agrega al final del vector elementos utilizando la 
    //?función push_back(). Este bucle se ejecuta hasta que no haya más elementos separados por comas en la línea.
      elementos.push_back(elemento);
    }


    //?La condición if (elementos.size() == 6) verifica si la cantidad de elementos en el vector elementos es igual a 6. 
    //?Si es así, significa que se trata de una película, ya que una película tiene 6 atributos: 
    //?(caracter, idVideo, título, género, duración, calificación).

    if (elementos.size() == 6) { 

      //?Se puede observar que en sí lo que se está haciendo es que los atributos de Película se están iniciliazando mediante 
      //?la estipulación de que cada atributo es igual a la posición pertinente del vector de elementos. Asimismo, se puede 
      //?observar que todos los elementos pertinentes a ese vector son de carácter string, por lo que consecuentemente se apela 
      //?a la función stoi, donde dicha función lo que realiza es que convierte un string a entero, dicho sólo se realizará 
      //? con los atributos de carácter entero que por efectos del archivo de texto se convirtieron en strings. 

      string caracter = elementos[0];
      int idVideo = stoi(elementos[1]);
      string titulo = elementos[2];
      string genero = elementos[3];
      int duracion = stoi(elementos[4]);
      int calificacion = stoi(elementos[5]);

      
      //?Aquí debemos de recordar que nosotros inicializamos nuestro vector vacío listaVideos, donde su función en sí 
      //?es que se agreguen las direcciones de memoria nuevas del objeto al vector vacío mediante la función pushback. 
      listaVideos.push_back(new Pelicula(caracter, idVideo, titulo, genero, duracion, calificacion));


     //?La condición else if (elementos.size() == 8) verifica si la cantidad de elementos en el vector elementos es igual a 8. 
     //?Si es así, significa que se trata de una serie, ya que una serie tiene 8 atributos: 
     //?(caracter, idVideo, serie, genero, duracion, calificacion, numeroEp, numTemporada
    } else if (elementos.size() == 8) {  
      string caracter = elementos[0];
      int idVideo = stoi(elementos[1]);
      string serie = elementos[2];
      string genero = elementos[3];
      int duracion = stoi(elementos[4]);
      int calificacion = stoi(elementos[5]);
      int numeroEp = stoi(elementos[6]);
      int numTemporada = stoi(elementos[7]);

      listaVideos.push_back(new Episodio(caracter, idVideo, serie, genero, duracion, calificacion, numeroEp, numTemporada));
    }
  }

  //?aAquí se cierra el archivo de texto en sí después de haber terminado de leer 
  //?y haber procesado todas las líneas.

  archivo.close();


  //?Aquí se inicia el output para el entorno de series.

  // Mostrar los videos
  cout << "\nBienvenido a Netflix:" << endl;
  cout << "\nFavor de insertar tus datos: ";

  string ID;
  string NOMBRE;

  while (true) {
    cout << "\n\nFavor de insertar el ID: ";
    getline(cin, ID);

    cout << "\nFavor de insertar el NOMBRE: ";
    getline(cin, NOMBRE);

    if (ID.empty() || NOMBRE.empty()) {
      cout << "\nError: Debes ingresar valores para el ID y el NOMBRE" << endl;
      continue;
    }

    break;
  }

  Usuario usuario(ID, NOMBRE, 20, 20);
  cout << usuario.imprimir() << endl;

  int opcion;

  while (true) {
    cout << "\n\nEste es el menú de opciones:" << endl;
    cout << "\n1.- Ver lista de videos" << endl;
    cout << "\n2.- Calificar un título" << endl;
    cout << "\n3.- Consultar lista de videos por género" << endl;
    cout << "\n4.- Ver datos del usuario (Favor de utilizar sólo cuando el usuario haya agregado videos a su biblioteca)" << endl;
    cout << "\n5.- Modificar el perfil del usuario" << endl;
    cout << "\n6.- Agregar video a la lista del usuario" << endl;
    cout << "\n7.- Terminar" << endl;

    while (true) {
      cout << "\nFavor de insertar la opción: ";
      cin >> opcion;

      while (opcion < 1 || opcion > 7) {
         cout << "Opción inválida. Inténtalo de nuevo." << endl;
         cout << "\n\nEste es el menú de opciones:" << endl;
         cout << "\n1.- Ver lista de videos" << endl;
          cout << "\n2.- Calificar un título" << endl;
          cout << "\n3.- Consultar lista de videos por género" << endl;
          cout << "\n4.- Ver datos del usuario (Favor de utilizar sólo cuando el usuario haya agregado videos a su biblioteca)" << endl;
          cout << "\n5.- Modificar el perfil del usuario" << endl;
          cout << "\n6.- Agregar video a la lista del usuario" << endl;
          cout << "\n7.- Terminar" << endl;
         cin >> opcion;

      }

      break;
    }


    //?A continuación se estipulan todas las condicionales acerca de lo requerido.


  //?Esta opción nos permite ver totalmente la cantidad de videos.

  if (opcion == 1) {
      // Consultar la lista de videos disponibles
      for (int i = 0; i < listaVideos.size(); i++) {
        cout << listaVideos[i]->muestra() << endl;
      }
    } 

    //?Esta opción nos permite consultar la lista de videos con cierta calificación

  else if (opcion == 2) {
    int calificacion;

    while (true) {
      cout << "Favor de insertar la calificación: ";
      cin >> calificacion;
      while (calificacion < 0 || calificacion > 5) {
        cout << "Calificación inválida. Inténtalo de nuevo." << endl;
        cout << "Favor de insertar la calificación: ";
        cin >> calificacion;
        
      }

      break;
    }

    //? Mostrar los videos con la calificación especificada
    bool encontrados = false;
    for (int i = 0; i < listaVideos.size(); i++) {
      if (listaVideos[i]->getCalificacion() == calificacion) {
        cout << listaVideos[i]->muestra() << endl;
        encontrados = true;
      }
    }

      if (!encontrados) {
        cout << "No se encontraron videos con la calificación especificada." << endl;
    }
  }


  //? Consultar la lista de videos por género

   else if (opcion == 3) {
    
      string genero;

      cout << "Favor de insertar el género: ";
      cin.ignore();
      getline(cin, genero);

      // Mostrar los videos del género especificado
      bool encontrados = false;
      for (int i = 0; i < listaVideos.size(); i++) {
        if (listaVideos[i]->getGenero() == genero) {
          cout << listaVideos[i]->muestra() << endl;
          encontrados = true;
        }
      }

      if (!encontrados) {
        cout << "No se encontraron videos del género especificado." << endl;
      }
    } 
    
  
    
    
  //? Ver datos del usuario

  else if (opcion == 4) {

      cout << usuario.imprimir() << endl;

      cout << "Lista de videos del usuario:" << endl;
      for (int i = 0; i < usuario.getContadorVideos(); i++) {
        int idVideo = usuario.getMisVideos()[i];
        for (int j = 0; j < listaVideos.size(); j++) {
          if (listaVideos[j]->getIdVideo() == idVideo) {
            cout << listaVideos[j]->muestra() << endl;
          }
        }
      }
    } 
    
    
    
  //? Modificar el perfil del usuario
  else if (opcion == 5) {
    
      string nuevoNombre;
      string nuevaCuenta;



      cout << "Favor de insertar la nueva cuenta: ";
      cin.ignore();
      getline(cin, nuevaCuenta);

      cout << "Favor de insertar el nuevo nombre: ";
      getline(cin, nuevoNombre);

      usuario.setNombre(nuevoNombre);
      usuario.setCuenta(nuevaCuenta);

      cout << "Perfil del usuario modificado exitosamente." << endl;
      cout << usuario.imprimir() << endl;


      //? Agregar video a la lista del usuario
    } else if (opcion == 6) {

      int idVideo;

      while (true) {
        cout << "Favor de insertar el ID del video que deseas agregar (0 para salir): ";
        cin >> idVideo;

        if (idVideo == 0) {
          break;
        }

        bool videoEncontrado = false;

        for (int i = 0; i < listaVideos.size(); i++) {
          if (listaVideos[i]->getIdVideo() == idVideo) {
            usuario.agregarVideo(idVideo);
            videoEncontrado = true;
            break;
          }
        }

        if (videoEncontrado) {
          cout << "Video agregado a la lista del usuario." << endl;
          break;
        } else {
          cout << "Video no encontrado. Inténtalo de nuevo." << endl;
        }
      }
    } 

   //? Terminar el programa

    else if (opcion == 7) {
       
        cout << "Gracias por utilizar Netflix. ¡Hasta luego!" << endl;
        break;
      }
    }

    //? Liberar la memoria de los videos creados
    for (int i = 0; i < listaVideos.size(); i++) {
      delete listaVideos[i];
    }

    return 0;
  }