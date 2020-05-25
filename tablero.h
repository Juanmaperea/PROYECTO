#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

class Tablero {

public:

	Tablero();

  ~Tablero();

  static const int Tamano = 10;

  void GuardarPartida(string Ruta2);
  void LeerArchivo(string Ruta1);
  void ImprimirTablero();
  void MoverEjercito1();
  void MoverEjercito2();
  void iniciarPosiciones();

  int **tablero;
  string *ejercito1;
  string *ejercito2;
  int *posicion1;
  int *posicion2;
  int posicionx1;
  int posicionx2;
  int posiciony1;
  int posiciony2;
  int _posicionx1;
  int _posicionx2;
  int _posiciony1;
  int _posiciony2;
  char teclasMovimiento;
  
protected:

private:

};

#endif 