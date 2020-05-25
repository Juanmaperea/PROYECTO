/**
  @file personaje.h
  @brief Aqui estan contenidas las librerias y declarados los metodos y tipos de datos que van a ser utilizados para los personajes
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#ifndef PERSONAJE_H_
#define PERSONAJE_H_
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Personaje {

  public:
    Personaje();
    ~Personaje();

    int ObtenerTipo();
    int ObtenerMana();
    int ObtenerVida();
    bool VerificarEstado(int V);
    string ObtenerNombre();

    Personaje *P;
    float Poder;
    float Mana;
    float Vida;
    int Tipo;
    string Nombre;
  protected:

  private:	
};

#endif 