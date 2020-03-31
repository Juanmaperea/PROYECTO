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
#include "tablero.h"

using std::string;
using namespace std;

// Método del constructor:
Tablero::Tablero() {
  ejercito1.resize(0);
  ejercito2.resize(0);
  posicion1.resize(0);
  posicion2.resize(0);
}
// Método del Destructor:
Tablero::~Tablero() {

}

/*
CONTRATO: LeerArchivo: Texto -> Vacío.
PROPÓSITO: Lee un documento plano de texto y carga los datos encontrados en matrices y vectores.
CABECERA:
void Tablero::LeerArchivo(string Ruta1) {
  
  ifstream Archivo;
  string Texto;
  Archivo.open(Ruta1.c_str(), ios::in);
  
  if(Archivo.fail()) {
    cout<<"No se pudo cargar el tablero\n";
    exit(1);
  }
  
  int Contador = 0;
    
  while(Contador <= 13) {
    
    getline(Archivo,Texto);  
    
    istringstream F(Texto); 
    string S; 
    int I = 0;
    
    while (getline(F, S, '-')) {
      if (Contador <= 9) {
        tablero[Contador][I] = stoi(S);
        I++;
      }
      else if (Contador == 10) {
        ejercito1.push_back(S);
      } 
      else if (Contador == 11) {
        ejercito2.push_back(S);
      }
      else if (Contador == 12) {
        posicion1.push_back(stoi(S));
      }
      else if(Contador==13) {
        posicion2.push_back(stoi(S));
      }
    }

    Contador = Contador + 1;

  }

  Archivo.close();

}

EJEMPLO:
Tablero[10][10]; 
ejercito1.resize(0);
ejercito2.resize(0);
Objeto.LeerArchivo();

Tablero :
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 2 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
ejercito1 : 
L M T T
ejercito2 : 
L M M T

(El método no retorna valores, el método solo lee el archivo plano y guarda los datos encontrados en otras variables).
*/
void Tablero::LeerArchivo(string Ruta1) {
  
  ifstream Archivo;
  string Texto;
  Archivo.open(Ruta1.c_str(), ios::in);
  
  if(Archivo.fail()) {
    cout<<"No se pudo cargar el tablero\n";
    exit(1);
  }
  
  int Contador = 0;
    
  while(Contador <= 13) {
    
    getline(Archivo,Texto);  
    
    istringstream F(Texto); 
    string S; 
    int I = 0;
    
    while (getline(F, S, '-')) {
      if (Contador <= 9) {
        tablero[Contador][I] = stoi(S);
        I++;
      }
      else if (Contador == 10) {
        ejercito1.push_back(S);
      } 
      else if (Contador == 11) {
        ejercito2.push_back(S);
      }
      else if (Contador == 12) {
        posicion1.push_back(stoi(S));
      }
      else if(Contador==13) {
        posicion2.push_back(stoi(S));
      }
    }

    Contador = Contador + 1;

  }

  Archivo.close();

}

/*
CONTRATO: ImprimirTablero: Vacío -> Vacío.
PROPÓSITO: Imprime en la consola el tablero o matriz de posiciones.
CABECERA:
void Tablero::ImprimirTablero() { 

  cout << "TABLERO ACTUAL: " << endl;

  int ContadorI = 0;
  int ContadorJ = 0;

  for(int I = 0; I < 10; I++){
    if(ContadorJ > 0 && ContadorJ < 9) {
      cout <<" " << ContadorJ;
    } 
    else if(ContadorJ == 0) {
      cout <<"  " << ContadorJ;
    } 
    else if (ContadorJ == 9) {
      cout << " " << ContadorJ << " ";
    }
    ContadorJ += 1;
  }
  cout << endl;

  for (int I = 0; I < Tamano; I ++) {
    cout << ContadorI << " ";
  
    for (int J = 0; J < Tamano; J ++) {
      cout << tablero[I][J]<<" "; 
    }
    cout << endl;
    ContadorI += 1;
  }

  cout << endl;
  cout << "ESTADO ACTUAL DE LOS EJÉRCITOS: " << endl;
  cout << "Ejército 1 (Atacante): ";
  for (int I = 0; I < ejercito1.size(); I ++) {
    if (I == (ejercito1.size() - 1)) {
      cout << ejercito1[I] << endl;
    }
    else {
      cout << ejercito1[I] << " ";
    }
  }
  
  cout << "Posición(X, Y): ";
  for (int I = 0; I < posicion1.size(); I ++) {
    if (I == (posicion1.size() - 1)) {
      cout << posicion1[I] << endl;
    }
    else {
      cout << posicion1[I] << ", ";
    }
  }
  
  cout << "Ejército 2 (Defensor): ";
  for (int I = 0; I < ejercito2.size(); I ++) {
    if (I == (ejercito2.size() - 1)) {
      cout << ejercito2[I] << endl;
    }
    else {
      cout << ejercito2[I] << " ";
    }
  }
  
  cout << "Posición (X, Y): ";
  for (int I = 0; I < posicion2.size(); I ++) {
    if (I == (posicion2.size() - 1)) {
      cout << posicion2[I] << endl;
    }
    else {
      cout << posicion2[I] << ", ";
    }
  }

  cout << endl << endl;
}

EJEMPLO:
Tablero[10][10]; 
Objeto.ImprimirTablero();

  0 1 2 3 4 5 6 7 8 9
0 0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0
2 0 0 0 0 2 0 0 0 0 0
3 0 0 0 0 0 0 0 0 0 0
4 0 0 0 0 3 3 0 0 0 0
5 0 0 0 0 3 3 0 0 0 0
6 0 0 0 0 0 0 0 0 0 0
7 0 0 0 0 0 0 0 0 0 0
8 0 0 0 0 0 0 0 0 0 0
9 1 0 0 0 0 0 0 0 0 0

(El método no retorna valores, el método solo imprime los valores almacenados en la matriz de datos tablero).
*/
void Tablero::ImprimirTablero() { 

  cout << "TABLERO ACTUAL: " << endl;

  int ContadorI = 0;
  int ContadorJ = 0;

  for(int I = 0; I < 10; I++){
    if(ContadorJ > 0 && ContadorJ < 9) {
      cout <<" " << ContadorJ;
    } 
    else if(ContadorJ == 0) {
      cout <<"  " << ContadorJ;
    } 
    else if (ContadorJ == 9) {
      cout << " " << ContadorJ << " ";
    }
    ContadorJ += 1;
  }
  cout << endl;

  for (int I = 0; I < Tamano; I ++) {
    cout << ContadorI << " ";
  
    for (int J = 0; J < Tamano; J ++) {
      cout << tablero[I][J]<<" "; 
    }
    cout << endl;
    ContadorI += 1;
  }

  cout << endl;
  cout << "ESTADO ACTUAL DE LOS EJÉRCITOS: " << endl;
  cout << "Ejército 1 (Atacante): ";
  for (int I = 0; I < ejercito1.size(); I ++) {
    if (I == (ejercito1.size() - 1)) {
      cout << ejercito1[I] << endl;
    }
    else {
      cout << ejercito1[I] << " ";
    }
  }
  
  cout << "Posición(X, Y): ";
  for (int I = 0; I < posicion1.size(); I ++) {
    if (I == (posicion1.size() - 1)) {
      cout << posicion1[I] << endl;
    }
    else {
      cout << posicion1[I] << ", ";
    }
  }
  
  cout << "Ejército 2 (Defensor): ";
  for (int I = 0; I < ejercito2.size(); I ++) {
    if (I == (ejercito2.size() - 1)) {
      cout << ejercito2[I] << endl;
    }
    else {
      cout << ejercito2[I] << " ";
    }
  }
  
  cout << "Posición (X, Y): ";
  for (int I = 0; I < posicion2.size(); I ++) {
    if (I == (posicion2.size() - 1)) {
      cout << posicion2[I] << endl;
    }
    else {
      cout << posicion2[I] << ", ";
    }
  }

  cout << endl << endl;
}

/*
CONTRATO: GuardarPartida: Texto -> Vacío.
PROPÓSITO: Reescribe o guarda en un documento plano los cambios hechos a los datos almacenados en la matriz tablero y el estado de los ejércitos.
CABECERA:
void Tablero::GuardarPartida(string Ruta2) {

  ofstream outputFile;
  outputFile.open(Ruta2.c_str());
  
  if(outputFile.fail()) {
    cout << "el Archivo no abrio correctamente" << endl;
  }

  for (int I = 0; I < Tamano; I ++) {
  
    for (int J = 0; J < Tamano; J ++) {
      if (J == 9) {
      outputFile<< tablero[I][J]<<" "<<endl; 
      }
      else {
        outputFile << tablero[I][J] << "-";
      }
    }  
  }

  int N = 0;

  for (int I = 0; I < ejercito1.size(); I ++) {
    if (I == (ejercito1.size() - 1)) {
      outputFile << ejercito1[N] << endl;
    }
    else {
      outputFile << ejercito1[N] << "-" ;
    }
    N ++;
  }
  
 N = 0;

  for (int I = 0; I < ejercito2.size(); I ++) {
    if (I == (ejercito2.size() - 1)) {
      outputFile << ejercito2[N] << endl;
    }
    else {
      outputFile << ejercito2[N] << "-";
    }
    N ++;
  }

  N = 0;

  for (int I = 0; I < posicion1.size(); I ++) {
    if (I == (posicion1.size() - 1)) {
      outputFile << posicion1[N] << endl;
    }
    else {
      outputFile << posicion1[N] << "-";
    }
    N ++;
  }

    N = 0;

  for (int I = 0; I < posicion2.size(); I ++) {
    if (I == (posicion2.size() - 1)) {
      outputFile << posicion2[N] << endl;
    }
    else {
      outputFile << posicion2[N] << "-";
    }
    N ++;
  }  

}
EJEMPLO:
Tablero[10][10]; 
ejercito1[4];
ejercito2[4];
Objeto.GuardarPartida();

PartidaGuardad.txt :
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 2 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
L M T T
L M M T

(El método no retorna valores, el método solo guarda datos en un archivo plano).
*/
void Tablero::GuardarPartida(string Ruta2) {

  ofstream outputFile;
  outputFile.open(Ruta2.c_str());
  
  if(outputFile.fail()) {
    cout << "el Archivo no abrio correctamente" << endl;
  }

  for (int I = 0; I < Tamano; I ++) {
  
    for (int J = 0; J < Tamano; J ++) {
      if (J == 9) {
      outputFile<< tablero[I][J]<<" "<<endl; 
      }
      else {
        outputFile << tablero[I][J] << "-";
      }
    }  
  }

  int N = 0;

  for (int I = 0; I < ejercito1.size(); I ++) {
    if (I == (ejercito1.size() - 1)) {
      outputFile << ejercito1[N] << endl;
    }
    else {
      outputFile << ejercito1[N] << "-" ;
    }
    N ++;
  }
  
 N = 0;

  for (int I = 0; I < ejercito2.size(); I ++) {
    if (I == (ejercito2.size() - 1)) {
      outputFile << ejercito2[N] << endl;
    }
    else {
      outputFile << ejercito2[N] << "-";
    }
    N ++;
  }

  N = 0;

  for (int I = 0; I < posicion1.size(); I ++) {
    if (I == (posicion1.size() - 1)) {
      outputFile << posicion1[N] << endl;
    }
    else {
      outputFile << posicion1[N] << "-";
    }
    N ++;
  }

    N = 0;

  for (int I = 0; I < posicion2.size(); I ++) {
    if (I == (posicion2.size() - 1)) {
      outputFile << posicion2[N] << endl;
    }
    else {
      outputFile << posicion2[N] << "-";
    }
    N ++;
  }  

}