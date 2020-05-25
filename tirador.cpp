/**
  @file tirador.cpp
  @brief Personaje Tirador
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/


#include "tirador.h"

/**
  @brief Metodo constructor que se encarga de iniciar los valores que corresponden a este personaje
*/

Tirador::Tirador():Personaje()
{
  Poder = 1;
  Mana = 0.3;
  Vida = 3;
  Tipo = 2;
  Nombre = "Tirador";
}

/**
  @brief Metodo desctructor de la clase tirador
*/

Tirador::~Tirador()
{

}