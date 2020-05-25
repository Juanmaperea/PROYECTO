/**
  @file magic.cpp
  @brief Personaje Mago
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#include "magic.h"

/**
  @brief Metodo constructor que se encarga de iniciar los valores que corresponden a este personaje
*/

Magic::Magic():Personaje()
{
  Poder = 0.2;
  Mana = 1;
  Vida = 5;
  Tipo = 3;
  Nombre = "Mago";
}

/**
  @brief Metodo destructor de la clase magic
*/

Magic::~Magic()
{

}