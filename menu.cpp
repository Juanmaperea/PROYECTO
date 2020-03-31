// Librerías a usar:
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>
#include<stack>

// Incluyendo el archivo de definición de la clase:
#include "menu.h"

using std::string;
using namespace std;

// Método del constructor:
Menu::Menu() {
  Opcion = 0;
}
// Método del Destructor:
Menu::~Menu() {

}

/*
CONTRATO: MostrarMenu: Vacío -> Vacío.
PROPÓSITO: Imprimir las opciones del Menú en la consola.
CABECERA:
void Menu::MostrarMenu() {

  cout << "Seleccione una opción: " << endl;
  cout << "1 - Juego Nuevo." << endl;
  cout << "2 - Guardar Juego"<<endl;
  cout << "3 - Cargar Juego." << endl;
  cout << "4 - Salir." << endl;
  cout << "5 - Instrucciones." << endl;
  cout << endl;

}

EJEMPLO: 
Objeto.MostrarMenu();

Seleccione una opción:
1 - Juego Nuevo.
2 - Guardar Juego
3 - Cargar Juego.
4 - Salir.
5 - Instrucciones.

(El método no retorna valores, el método solo imprime en la consola).
*/
void Menu::MostrarMenu() {

  cout << "Seleccione una opción: " << endl;
  cout << "1 - Juego Nuevo." << endl;
  cout << "2 - Guardar Juego" << endl;
  cout << "3 - Cargar Juego." << endl;
  cout << "4 - Salir." << endl;
  cout << "5 - Instrucciones." << endl;
  cout << endl;

}

/*
CONTRATO: EjecutarMenu: Numero, Objeto -> Vacío.
PROPÓSITO: Ejecutar una serie de métodos de la clase del objeto parámetro, de acuerdo a un número ingresado.
CABECERA:
void Menu::EjecutarMenu(int Opc, Tablero tablero) {
  
  Opcion = Opc;

  if (Opcion == 1) {
    cout << "¡COMIENZA EL JUEGO!" << endl;
    tablero.LeerArchivo("Tablero.txt");
    tablero.ImprimirTablero();
   
  }
  else if(Opcion == 2) {
    tablero.LeerArchivo("Tablero.txt");
    tablero.GuardarPartida("PartidaGuardada.txt");
    cout<<endl;
    cout<<"El juego ha sido guardado."<<endl;
    cout<<endl;
  }
  else if (Opcion == 3) {
    cout << "Partida Cargada." << endl;
    tablero.LeerArchivo("PartidaGuardada.txt");
    tablero.ImprimirTablero();
  }
  else if (Opcion == 4) {
    cout << "¡Gracias por jugar!" << endl;
    exit(1);
  }
  else if (Opcion == 5) {
    cout << "Instrucciones: " << endl;
    cout << "1. Ejecute el programa." << endl;
    cout << "2. Explore un poco.";
    cout << "3. Disfrute." << endl;
    cout << endl;
  }

}

EJEMPLO: 
Opcion = 5;
Tablero tablero;
Objeto.EjecutarMenu(5, tablero);

Instrucciones: 
1. Ejecute el programa.
2. Explore un poco.
3. Disfrute.

(El método no retorna valores, solo ejecuta métodos de otra clase, que en su mayoría solo imprimen en pantalla).
*/
void Menu::EjecutarMenu(int Opc, Tablero tablero) {
  
  Opcion = Opc;

  if (Opcion == 1) {
    cout << "¡COMIENZA EL JUEGO!" << endl;
    tablero.LeerArchivo("Tablero.txt");
    tablero.ImprimirTablero();
   
  }
  else if(Opcion == 2) {
    tablero.LeerArchivo("Tablero.txt");
    tablero.GuardarPartida("PartidaGuardada.txt");
    cout<<endl;
    cout<<"El juego ha sido guardado."<<endl;
    cout<<endl;
    tablero.ImprimirTablero();
  }
  else if (Opcion == 3) {
    cout << "Partida Cargada." << endl;
    tablero.LeerArchivo("PartidaGuardada.txt");
    tablero.ImprimirTablero();
  }
  else if (Opcion == 4) {
    cout << "¡Gracias por jugar!" << endl;
    exit(1);
  }
  else if (Opcion == 5) {
    cout << "Instrucciones: " << endl;
    cout << "1. Ejecute el programa." << endl;
    cout << "2. Explore un poco." << endl;
    cout << "3. Disfrute." << endl;
    cout << endl;
  }

}

/*
CONTRATO: IniciarMenu: Numero, Objeto -> Vacío.
PROPÓSITO: Reproducir una secuencia de acciones (Mostrar el menú y ejecutar la opción) hasta que el usuario ingrese "4" como el valor de "Opc".
CABECERA:
void Menu::IniciarMenu(int Opc,Tablero tablero)
{
  
  while(Opc != 4)
   {
     MostrarMenu();
     cin >> Opc;
     EjecutarMenu(Opc, tablero);
   }

}

EJEMPLO: 
Seleccione una opción:
1 - Juego Nuevo.
2 - Guardar Juego
3 - Cargar Juego.
4 - Salir.
5 - Instrucciones.

Opcion = 5;
Tablero tablero;
Objeto.EjecutarMenu(5, tablero);

Instrucciones: 
1. Ejecute el programa.
2. Explore un poco.
3. Disfrute.

Seleccione una opción:
1 - Juego Nuevo.
2 - Guardar Juego
3 - Cargar Juego.
4 - Salir.
5 - Instrucciones.

Opcion = 4;
Objeto.EjecutarMenu(4, tablero);

¡Gracias por jugar!
exit status 1
(El método no retorna valores, solo ejecuta métodos de esta clase).
*/
void Menu::IniciarMenu(int Opc,Tablero tablero)
{
  
  while(Opc != 4)
   {
     MostrarMenu();
     cin >> Opc;
     EjecutarMenu(Opc, tablero);
   }

}

