#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>
#include<stack>

using namespace std;
using std::string;
#include "caja.h"

class Tablero {

public:
	Tablero();
  ~Tablero();
  void cargar();

  static const int Tamano = 10;

  void LeerArchivo();
  void ImprimirTablero();
  void AsignarCajas();

protected:

private:
  int tablero[Tamano][Tamano];
  //Caja Matriz[Tamano][Tamano];
  vector < string > ejercito1;
  vector < string > ejercito2;

  
};

#endif 