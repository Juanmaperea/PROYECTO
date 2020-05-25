/**
  @file luchador.cpp
  @brief Personaje Luchador
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/


#include "luchador.h"

/**
  @brief Metodo constructor que se encarga de iniciar los valores que corresponden a este personaje
*/

Luchador::Luchador():Personaje()
{
  Poder = 0.7;
  Mana = 0.6;
  Vida = 4;
  Tipo = 1;
  Nombre = "Luchador";
}

/**
  @brief Metodo destructor de la clase luchador
*/

Luchador::~Luchador()
{

}
