#ifndef CAMPO_H_
#define CAMPO_H_
#include <iostream>
#include <fstream>
#include <string>
#include"personaje.h"
#include"luchador.h"
#include"tirador.h"
#include"magic.h"
#include"tablero.h"

class Campo: public Tablero
{
  public:
  Campo();
  ~Campo();

  void Atacante(int A);
  void Defensor(int A);
  void Enfrentamiento(int A, int B);
  void MenorVida(int A);
  void QuitarVida(int A, int B);
  void VerificarVida(int A);
  void GanarPartida();
  
  void Prueba();

  Personaje *E1[4];
  Personaje *E2[4];

  float PoderTotal;
  float ManaTotal;
  int Menor;

  int V1;
  int V2;

};

#endif