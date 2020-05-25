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