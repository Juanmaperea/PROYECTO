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

#include "tablero.h"
using std::string;
using namespace std;

Tablero::Tablero() {
  ejercito1.resize(0);
  ejercito2.resize(0);
}

Tablero::~Tablero() {
}

void Tablero::LeerArchivo() {
  ifstream Archivo;
  string Texto;
  Archivo.open("Tablero.txt", ios::in);
  
  if(Archivo.fail()) {
    cout<<"No se pudo cargar el tablero\n";
    exit(1);
  }
  
  int Contador = 0;

 
    
  while(Contador <= 11) {
    
    getline(Archivo,Texto);  
    
    istringstream F(Texto); 
    string S; 
    int I = 0;
    
    while (getline(F, S, '-')) {
      if (Contador <= 9) {
        tablero[Contador][I] = stoi(S);
        I++;
      }
      else if(Contador == 10) {
        ejercito1.push_back(S);
      } 
      else {
        ejercito2.push_back(S);
      }
    //  tablero[Contador][I] = stoi(S);
    //  I++;

    }

    
    
    
    
    Contador = Contador + 1;
  }
  Archivo.close();

  cout << tablero[0][0] << endl;
  cout << "FUNCIONÓ!: " << ejercito1[0] << endl;
  cout << "FUNCIONÓ!: " << ejercito1[1] << endl;
  cout << "FUNCIONÓ!: " << ejercito2[2] << endl;
  cout << "FUNCIONÓ!: " << ejercito2[3] << endl;
}


void Tablero::ImprimirTablero() { 
  int ContadorI=0;
  int ContadorJ=0;

  for(int I = 0; I < 10; I++){
    if(ContadorJ > 0 && ContadorJ < 9) {
      cout <<" " << ContadorJ;
    } else if(ContadorJ == 0) {
      cout <<"  " << ContadorJ;
    } else if (ContadorJ == 9) {
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
}