/**
  @file menu.h
  @brief Aqui estan contenidas las librerias y declarados los metodos y tipos de datos que van a ser utilizados para el menu
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

#include "tablero.h"
#include "campo.h"

class Menu {

public:
	Menu();
  ~Menu();

  void MostrarMenu();
  void EjecutarMenu(int Opc, Tablero tablero);
  void IniciarMenu(int Opc,Tablero tablero);
  void MenuInterno();
  void EjecutarInterno(int Opc, Tablero tablero);

  Campo Ataque;
protected:

private:
  int Opcion;
};

#endif 