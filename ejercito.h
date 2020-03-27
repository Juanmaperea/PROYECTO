#ifndef _EJERCITO_H_
#define _EJERCITO_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>
//#include"tablero.h"
//#include"tablero.cpp"
using std::string;
using namespace std;

class Ejercito {

public:
	Ejercito();
  ~Ejercito();
  void AsignarPostura(int P);
  void Composicion();
  void ValoresTotales();

protected:

private:
  int NumIntegrantes;
  string Tipo;
  float PoderTotal;
  float ManaTotal;
  float VidaTotal;
  vector < char > Equipo;

};

#endif 