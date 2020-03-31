// Guardas:
#ifndef _TABLERO_H_
#define _TABLERO_H_

// Librerías a usar:
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>
#include <stack>

using namespace std;
using std::string;

// Clase:
class Tablero {

public:
// Constructor de la clase:
	Tablero();
// Destructor de la clase:
  ~Tablero();

// Contante fija:
  static const int Tamano = 10;

// Métodos:
  void GuardarPartida(string Ruta2);
  void LeerArchivo(string Ruta1);
  void ImprimirTablero();

protected:

private:
// Atributos y/o variables:
  int tablero[Tamano][Tamano];
  vector < string > ejercito1;
  vector < string > ejercito2;
  vector < int > posicion1;
  vector < int > posicion2;
  
};

#endif 