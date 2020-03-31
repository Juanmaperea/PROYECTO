// Guardas:
#ifndef _MENU_H_
#define _MENU_H_

//Librerías a usar:
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>

using std::string;
using namespace std;

// Incluyendo el archivo de definición de la clase "Tablero":
#include "tablero.h"

// Clase:
class Menu {

public:
// Constructor de la clase:
	Menu();
// Destructor de la clase:
  ~Menu();

// Métodos:
void MostrarMenu();
void EjecutarMenu(int Opcion, Tablero tablero);
void IniciarMenu(int Opc,Tablero tablero);

protected:

private:
// Atributos y/o variables:
int Opcion;
};

#endif 