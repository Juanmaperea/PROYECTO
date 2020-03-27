#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>

#include "avatar.h"
using std::string;
using namespace std;

Avatar::Avatar() { 
  Poder = 0;
  Mana = 0;
  Vida = 0;
  Tipo = " ";
  //Postura = false;
}

Avatar::~Avatar() {

}

// Para asignar valores, de acuerdo al Avatar:
void Avatar::AsignarValores(char T) { 

  if (T == 'L'){
    Tipo = "Luchador";
    Poder = 0.7;
    Mana = 0.6;
    Vida = 4; 
  }

  else if (T == 'T'){
    Tipo = "Tirador";
    Poder = 1;
    Mana = 0.3;
    Vida = 3; 
  }

  else if (T == 'M'){
    Tipo = "Mago";
    Poder = 0.2;
    Mana = 1;
    Vida = 5; 
  }
  

}

float Avatar::SetPoder() {
  return Poder;
}

float Avatar::SetMana() {
  return Mana;
}

float Avatar::SetVida() {
  return Vida;
}