#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

#include "tablero.h"

class Menu {

public:
	Menu();
  ~Menu();

  void MostrarMenu();
  void EjecutarMenu(int Opc, Tablero tablero);
  void IniciarMenu(int Opc,Tablero tablero);
  void MenuInterno();
  void EjecutarInterno(int Opc, Tablero tablero);

protected:

private:
  int Opcion;
};

#endif 