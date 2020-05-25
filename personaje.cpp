/**
  @file personaje.cpp
  @brief Aqui estan los metodos que permiten definir un personaje
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#include"personaje.h"

using namespace std;
 
/**
  @brief Metodo constructor que se encarga de iniciar los valores que luego van a corresponder para cada personaje
*/

Personaje::Personaje()
{
  Poder = 0;
  Mana = 0;
  Vida = 0;
  Tipo = 0;
  Nombre = " ";
}

/**
  @brief Metodo destructor de la clase personaje
*/

Personaje::~Personaje()
{

}

/**
  @brief Metodo que retorna el numero de tipo del personaje
  @return El numero del tipo de personaje correspondiente: 1 para luchador, 2 para tirador y 3 para mago
*/

int Personaje::ObtenerTipo()
{
  return Tipo;
}

/**
  @brief Metodo que retorna el numero de vida del personaje
  @return El numero del vida del personaje correspondiente para cada personaje
*/

int Personaje::ObtenerVida()
{
  return Vida;
}

/**
  @brief Metodo que retorna el numero de mana del personaje
  @return El numero del mana del personaje correspondiente para cada personaje
*/

int Personaje::ObtenerMana()
{
  return Mana;
}

/**
  @brief Metodo que verifica si la vida de un personaje esta igual o por debajo de 0
  @param V Vida de un personaje
  @return Retorna false en caso de que la vida este igual por debajo de 0, en caso contrario retorna true
*/

bool Personaje::VerificarEstado(int V)
{
  if (V <= 0) {
    return false;
  }
  else {
    return true;
  }
}

/**
  @brief Metodo que retorna el nombre del personaje
  @return El nombre correspondiente para cada personaje
*/

string Personaje::ObtenerNombre()
{
  return Nombre;
}