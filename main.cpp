/**
  @file main.cpp
  @brief Juego Code Legends.
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/


#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>


#include "menu.h"
#include "tablero.h"

using namespace std;

/**
  @brief Metodo para iniciar el programa
*/

int main() {
  Menu Partida;
  Tablero tablero;
  tablero.iniciarPosiciones();
  int Opc;
  Partida.IniciarMenu(Opc,tablero);
}