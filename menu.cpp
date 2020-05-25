/**
  @file menu.cpp
  @brief Aqui estan los metodos del menu que permite efectuar las acciones del menu.
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#include "menu.h"

using namespace std;

/**
  @brief Metodo constructor que se encarga de iniciar el valor que sera usado dentro de los metodos del menu
*/

Menu::Menu() {
  Opcion = 0;
}

/**
  @brief Metodo destructor de la clase menu
*/

Menu::~Menu() {

}

/**
  @brief Metodo que se encarga de mostrar el menu principal del juego
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

/**
  @brief Metodo que se encarga de ejecutar las funciones del menu principal del juego
  @param Opc Numero que representa las opciones del menu
  @param tablero Tablero que se va usar para el juego
*/

void Menu::EjecutarMenu(int Opc, Tablero tablero) {
  
  Opcion = Opc;

  if (Opcion == 1) {
    cout << "¡COMIENZA EL JUEGO!" << endl;
    tablero.LeerArchivo("Tablero.txt");
    tablero.ImprimirTablero();
    cout<<endl;
    cout<<endl;
  }
  else if(Opcion == 2) {
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

    cout << endl;
    cout << "Para jugar a Code Legends: " << endl;
    cout << "1. Seleccione la opción 1.Juengo Nuevo." << endl;
    cout << "2. Escoja el ejército con el que jugará el turno ingresando 1 para el ejército atacante o 2 para ejército defensor." << endl;
    cout << "3. Escoja la dirección a la que se quiera mover: W para arriba, S para abajo, A para izquierda y D para derecha." << endl;
    cout << "4. Si lo desea, puede atacar escogiendo la opción Atacar en el menú." << endl;
    cout << "5. Puede guardar los avances de la partida, seleccionando la opción Guardar partida." << endl;
    cout << "6. Puede salir del juego primero saliendo de la partida, presionando 3 y luego del programa presionando 4." << endl;
    cout << endl;


  }
  else
  {
    cout<<"Esta opcion no es valida"<<endl;
    cout<<"Porfavor seleccione una de estas: "<<endl;
    cout<<endl;
    cout<<endl;
  }
}


/**
  @brief Metodo que se iniciar los menus del juego
  @param Opc Numero que representa las opciones del menu
  @param tablero Tablero que se va usar para el juego
*/

void Menu::IniciarMenu(int Opc,Tablero tablero)
{
  while(Opc != 4 && Opc != 1)
   {
     MostrarMenu();
     cin >> Opc;
     EjecutarMenu(Opc, tablero);
   }

   while(Opc == 1){
     while(Opc != 3){
      MenuInterno();
      cin >> Opc;
      EjecutarInterno(Opc,tablero);
   }
}
}

/**
  @brief Metodo que se encarga de mostrar el menu interno del juego
*/

void Menu::MenuInterno()
{
  cout << "Seleccione una opción: " << endl;
  cout << "1 - Mover." << endl;
  cout << "2 - Guardar Juego" << endl;
  cout << "3 - Salir." << endl;
  cout << "4 - Atacar." << endl;
  cout << endl;
}

/**
  @brief Metodo que se encarga de ejecutar las funciones del menu interno del juego
  @param Opc Numero que representa las opciones del menu
  @param tablero Tablero que se va usar para el juego
*/


void Menu::EjecutarInterno(int Opc, Tablero tablero)
{
  Opcion = Opc;

  if (Opcion == 1) {
    cout<<"Ejercito numero 1 o 2?:"<<endl;
    int ejercito;
    ejercito=0;
    cin>>ejercito;
    if(ejercito==1)
    {
    cout << "w: Arriba"<<endl;
    cout << "s: Abajo"<<endl;
    cout << "a: Izquierda"<<endl;
    cout << "d: Derecha"<<endl;
    cout << "e: terminar de mover"<<endl;
    tablero.MoverEjercito1();
    tablero.ImprimirTablero();
    }
    else
    {
      cout << "w: Arriba"<<endl;
      cout << "s: Abajo"<<endl;
      cout << "a: Izquierda"<<endl;
      cout << "d: Derecha"<<endl;
    tablero.MoverEjercito2();
    tablero.ImprimirTablero();
    }
  }
  else if(Opcion == 2) {
    tablero.GuardarPartida("PartidaGuardada.txt");
    cout << endl;
    cout << "El juego ha sido guardado." << endl;
    cout << endl;
    tablero.ImprimirTablero();
  }

  else if (Opcion == 3) {
    cout << "¡Gracias por jugar esta partida!" << endl << endl;
    IniciarMenu(Opc, tablero);
  }

  else if (Opcion == 4){
    cout << "¡Usted ha atacado!" << endl;
    Ataque.Enfrentamiento(1, 2);
  }

  else {
    cout<<"Esta opcion no es valida"<<endl;
    cout<<"Porfavor seleccione una de estas: "<<endl;
    cout<<endl;
    cout<<endl;
  }
}
