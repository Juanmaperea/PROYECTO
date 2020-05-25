/**
  @file campo.h
  @brief Aqui estan contenidas las librerias y declarados los metodos y tipos de datos que van a ser utilizados para el campo
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/


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