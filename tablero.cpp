/**
  @file tablero.cpp
  @brief Aqui estan los metodos del tablero que permite efectuar las acciones del tablero
  @author Juan Manuel Perea Coronado - 1926462.
  @author Johan Esteban Riveros Giraldo - 1927397.
  @author Erick Santiago Andrade Gutierrez - 1927286.
  @date 25/05/2020
*/

#include "tablero.h"

using namespace std;

Tablero::Tablero() {
  
  ejercito1 = new string[4];
  ejercito2 = new string[4];
  posicion1 = new int[2];
  posicion2 = new int[2];

  tablero = new int *[10]; 
  for(int i = 0; i <= 10; i++) {
    *(tablero + i) = new int [9];
    
  } 
}

Tablero::~Tablero() {

}

/**
  @brief Metodo que se encarga de leer el archivo .txt que nos permitira cargar el tablero.
  @param Ruta1 Extension .txt que se desea leer
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
    int J = 0;
    int K = 0;
    int L = 0;
    int M = 0;
    
    while (getline(F, S, '-')) {
      if (Contador <= 9) {
        tablero[Contador][I] = stoi(S);
        I++;
      }
      else if (Contador == 10) {
        ejercito1[J] = S;
        J++;
      } 
      else if (Contador == 11) {
        ejercito2[K] = S;
        K++;  
      }
      else if (Contador == 12) {
        posicion1[L] = stoi(S);
        L++;
      }
      else if(Contador==13) {
        posicion2[M] = stoi(S);
        M++;
      }
    }

    Contador = Contador + 1;

  }

  Archivo.close();
}

/**
  @brief Metodo que imprime el estado actual del tablero que va cambiando cada que se acualiza su estado.
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

  for (int I = 0; I < 4; I ++) {
    if (I == (4 - 1)) {
      cout << ejercito1[I] << endl;
    }
    else {
      cout << ejercito1[I] << " ";
    }
  }
  
  cout << "Posición(X, Y): ";
  for (int I = 0; I < 2; I ++) {
    if (I == (2 - 1)) {
      cout << posicion1[I] << endl;
    }
    else {
      cout << posicion1[I] << ", ";
    }
  }
  
  cout << "Ejército 2 (Defensor): ";
  for (int I = 0; I < 4; I ++) {
    if (I == (4 - 1)) {
      cout << ejercito2[I] << endl;
    }
    else {
      cout << ejercito2[I] << " ";
    }
  }
  
  cout << "Posición (X, Y): ";
  for (int I = 0; I < 2; I ++) {
    if (I == (2 - 1)) {
      cout << posicion2[I] << endl;
    }
    else {
      cout << posicion2[I] << ", ";
    }
  }

  cout << endl << endl;
}

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

  for (int I = 0; I < 4; I ++) {
    if (I == (4 - 1)) {
      outputFile << ejercito1[N] << endl;
    }
    else {
      outputFile << ejercito1[N] << "-" ;
    }
    N ++;
  }
  
 N = 0;

  for (int I = 0; I < 4; I ++) {
    if (I == (4 - 1)) {
      outputFile << ejercito2[N] << endl;
    }
    else {
      outputFile << ejercito2[N] << "-";
    }
    N ++;
  }

  N = 0;

  for (int I = 0; I < 2; I ++) {
    if (I == (2 - 1)) {
      outputFile << posicion1[N] << endl;
    }
    else {
      outputFile << posicion1[N] << "-";
    }
    N ++;
  }

    N = 0;

  for (int I = 0; I < 2; I ++) {
    if (I == (2 - 1)) {
      outputFile << posicion2[N] << endl;
    }
    else {
      outputFile << posicion2[N] << "-";
    }
    N ++;
  }  
}

/**
  @brief Metodo encargado de mover al ejercito 1 por medio de sus posiciones.
*/

void Tablero::MoverEjercito1()
{
    cout<<"Digite una tecla para mover el ejercito"<<endl;
    do{
    cin>>teclasMovimiento;

    teclasMovimiento=tolower(teclasMovimiento);
    
    

    switch(teclasMovimiento)
    {
      case 'w':
      cout<<"voy bien 1"<<endl;
      cout<<posiciony1<<endl;
      cout<<posicionx1<<endl;
      cout<<_posiciony1<<endl;
      cout<<_posicionx1<<endl;
      tablero[_posiciony1][_posicionx1]=0;
      _posiciony1=_posiciony1-1;
      tablero[_posiciony1][_posicionx1]=1;
      
      cout<<_posiciony1<<endl;
      cout<<_posicionx1<<endl;

      cout<<"voy bien 2"<<endl;
      break;

      case 's':
      tablero[_posiciony1][_posicionx1]=0;
      _posiciony1=_posiciony1 + 1;
      tablero[_posiciony1][_posicionx1]=1;
      break;

      case 'a':
      tablero[_posiciony1][_posicionx1]=0;
      _posicionx1=_posicionx1-1;
      tablero[_posiciony1][_posicionx1]=1;


      case'd':
      tablero[_posiciony1][_posicionx1]=0;
      _posicionx1=_posicionx1+1;
      tablero[_posiciony1][_posicionx1]=1;


    }
    }while(teclasMovimiento!='e') ;    
}

/**
  @brief Metodo encargado de mover al ejercito 2 por medio de sus posiciones.
*/

void Tablero::MoverEjercito2()
{
    cout<<"Digite una tecla para mover el ejercito"<<endl;
    cin>>teclasMovimiento;

    teclasMovimiento=tolower(teclasMovimiento);

    posicionx2=_posicionx2;
    posiciony2=_posiciony2;

    switch(teclasMovimiento)
    {
      case 'w':
      cout<<"voy bien 1"<<endl;
      cout<<posiciony2<<endl;
      cout<<posicionx2<<endl;
      tablero[posiciony2][posicionx2]=0;
      posiciony2=posiciony2-1;
      tablero[posiciony2][posicionx2]=2;
      
      cout<<posiciony1<<endl;

      cout<<"voy bien 2"<<endl;
      break;

      case 's':
      tablero[posiciony2][posicionx2]=0;
      posiciony2=posiciony2 + 1;
      tablero[posiciony2][posicionx2]=2;
      break;

      case 'a':
      tablero[posiciony2][posicionx2]=0;
      posicionx2=posicionx2-1;
      tablero[posiciony2][posicionx2]=2;


      case'd':
      tablero[posiciony2][posicionx2]=0;;
      posicionx2=posicionx2+1;
      tablero[posiciony2][posicionx2]=2;
    }
  for(int i=0;i<10;i++)
     for (int j = 0; j < 10; j++) {
      if(tablero[i][j]==2){   
        _posicionx2=i;_posiciony2=j;                
        }else if(tablero[i][j]==1){
          _posicionx1=i;_posiciony1=j;
                    
        }
    }      
}

/**
  @brief Metodo encargado de inicializar las posiciones de los ejercitos.
*/

void Tablero::iniciarPosiciones()
{
  posicionx1=0;
  posiciony1=9;
  posicionx2=4;
  posiciony2=2;
  _posicionx1=0;
  _posiciony1=0;
  _posicionx1=posicionx1;
    _posiciony1=posiciony1;
    _posicionx2=posicionx2;
    _posiciony2=posiciony2;

}