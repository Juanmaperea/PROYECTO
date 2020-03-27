#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>

#include "ejercito.h"
//#include "tablero.cpp"
//#include "tablero.h"

using std::string;
using namespace std;

Ejercito::Ejercito() {
  NumIntegrantes = 4;
  Tipo = " ";
  PoderTotal = 0;
  ManaTotal = 0;
  VidaTotal = 0;
  Equipo.resize(4);
}

Ejercito::~Ejercito() {

}

void Ejercito::AsignarPostura(int P) {
  if (P == 1) {
    Tipo = "Atacante";
  }
 else if (P == 2) {
    Tipo = "Defensor";
  }
//cout << "ESTO DE ES DE EJERCITO.CPP" << ejercito[0];
}
//Recibe un vector avatares (Ejercito) y un objeto del tipo Avatar

// El vector de avatares, se obtiene del archivo y a través de la clase Avatar se obtienen los valores.
void Ejercito::ValoresTotales() {
  for (int i = 0; i <= 4; i ++) {

  }
}

/*void Ejercito:: Composicion() {
  for 
}*/

//atacante=true  atacante= false
