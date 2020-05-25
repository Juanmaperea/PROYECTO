/**
  @file campo.cpp
  @brief Aqui estan los metodos del campo que permite efectuar las interacciones entre los ejercitos
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#include <iostream>
#include"campo.h"
#include <stdlib.h>
using namespace std;


/**
  @brief Metodo constructor de la clase campo
*/

Campo::Campo()
{
/*
  for (int i = 0; i < 4; i ++) {
    if (ejercito1[i] == "L") {
      E1[i] = new Luchador();
    }
    else if (ejercito1[i] == "T") {
      E1[i] = new Tirador();
    }
    else if (ejercito1[i] == "M") {
      E1[i] = new Magic();
    }
  }

  for (int j = 0; j < 4; j ++) {
    if (ejercito2[j] == "L") {
      E1[j] = new Luchador();
    }
    else if (ejercito2[j] == "T") {
      E1[j] = new Tirador();
    }
    else if (ejercito2[j] == "M") {
      E1[j] = new Magic();
    }
  }
*/
E1[0] = new Luchador;
E1[1] = new Tirador;
E1[2] = new Magic;
E1[3] = new Magic;

E2[0] = new Tirador;
E2[1] = new Magic;
E2[2] = new Tirador;
E2[3] = new Tirador;
}

/**
  @brief Metodo destructor de la clase campo.
*/

Campo::~Campo() {

}

/**
  @brief Metodo indica que un ejercito es el atacante
  @param A Numero que indica cual ejercito es el atacante
*/

void Campo::Atacante(int A) {
  PoderTotal = 0;
  if (A == 1){
    for (int i = 0; i < 4; i ++) {
      PoderTotal = PoderTotal + (E1[i] -> Poder);
    }
  }

  if (A == 2){
    for (int j = 0; j < 4; j ++) {
      PoderTotal = PoderTotal + (E2[j] -> Poder);
    }
  }
}

/**
  @brief Metodo indica que un ejercito es el defensor
  @param A Numero que indica cual ejercito es el defensor
*/

void Campo::Defensor(int A) {
  ManaTotal = 0;
  if (A == 1){
    for (int i = 0; i < 4; i ++) {
      ManaTotal = ManaTotal + (E1[i] -> Mana);
    }
  }

  if (A == 2){
    for (int j = 0; j < 4; j ++) {
      ManaTotal = ManaTotal + (E2[j] -> Mana);
    }
  }
}

/**
  @brief Metodo indica que un ejercito es el atacante
  @param A Numero que indica cual ejercito es el atacante
*/

void Campo::MenorVida(int A) {
  Menor = 0;


  if (A == 1){
    for(int i = 0; i < 4; i ++){
      if ((E1[Menor] -> Vida) > (E1[i] -> Vida)) {
        if ((E1[i] -> Vida) > 0) {
          Menor = i;
        }
      }
    }
  }
  if (A == 2){
    for(int j = 0; j < 4; j ++){
      if ((E2[Menor] -> Vida) > (E2[j] -> Vida)) {
        if ((E2[j] -> Vida) > 0) {
          Menor = j;
        }
      }
    }
  }
}

void Campo::QuitarVida(int A, int B){
  if (A == 1){
    E1[B] -> Vida = (E1[B] -> Vida) - 5;
  }
    if (A == 2){
    E2[B] -> Vida = (E2[B] -> Vida) - 5;
  }
}


/**
  @brief Metodo efectua el enfrentamiento de los ejercitos
  @param A Numero que indica un ejercito
  @param B Numero que indica un ejercito
*/

void Campo::Enfrentamiento(int A, int B) {
  VerificarVida(A);
  VerificarVida(B);
  Atacante(A);
  Defensor(B);
  if (PoderTotal > ManaTotal){
    MenorVida(B);
    QuitarVida(B, Menor);
  }
  else if (PoderTotal < ManaTotal) {
    MenorVida(A);
    QuitarVida(A, Menor);
  }
  else if (PoderTotal == ManaTotal) {
    MenorVida(A);
    QuitarVida(A, Menor);
    MenorVida(B);
    QuitarVida(B, Menor);
  }
  GanarPartida();
  //Prueba();
}

/**
  @brief Metodo verifica la vida de cada uno de los integrantes del ejercito
  @param A Numero que indica cual es el ejercito
*/

void Campo::VerificarVida(int A){
  V1 = 4;
  V2 = 4;
  if (A == 1) {
    for (int i = 0; i < 4; i ++) {
      if ((E1[i] -> Vida) <= 0) {
        E1[i] -> Poder = 0;
        E1[i] -> Mana = 0;
        V1 = V1 - 1;
      }
    }
  }
  if (A == 2) {
    for (int j = 0; j < 4; j ++) {
      if ((E2[j] -> Vida) <= 0) {
        E2[j] -> Poder = 0;
        E2[j] -> Mana = 0;
        V2 = V2 - 1;
      }
    }
  }
}

/**
  @brief Metodo indica si un ejercito ha perdido todos sus integrantes y decide un ganador, en caso de no haber uno aun continua el combate
*/

void Campo::GanarPartida() {
  if (V1 <= 0) {
    cout << "El equipo Atacante ha perdido sus tropas. El equipo Defensor gana." << endl;
    exit(1);
  }
  else if (V2 <= 0) {
    cout << "El equipo Defensor ha perdido sus tropas. El equipo Atacante gana." << endl;
    exit(1);
  }
  else {
    cout << "El combate continua." << endl;
  }
}

/*
void Campo::Prueba() {
  cout << "EJERCITO 1:" << endl;
  cout << E1[0] -> Nombre << ": " << E1[0] -> Vida << endl;
  cout << E1[1] -> Nombre << ": " << E1[1] -> Vida << endl;
  cout << E1[2] -> Nombre << ": " << E1[2] -> Vida << endl;
  cout << E1[3] -> Nombre << ": " << E1[3] -> Vida << endl;
  cout << endl;
  
  cout << "EJERCITO 2:" << endl;
  cout << E2[0] -> Nombre << ": " << E2[0] -> Vida << endl;
  cout << E2[1] -> Nombre << ": " << E2[1] -> Vida << endl;
  cout << E2[2] -> Nombre << ": " << E2[2] -> Vida << endl;
  cout << E2[3] -> Nombre << ": " << E2[3] -> Vida << endl;
  cout << endl;

  cout << V1 << "......." << V2 << endl;
  
  cout << "______________________________________________" << endl;
}
*/