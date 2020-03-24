#ifndef _CAJA_H_
#define _CAJA_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>

using std::string;
using namespace std;

class Caja {
  
public:
	Caja();
  ~Caja();

protected:

private:
  int Numero;
  int Valor;
  int Torreta;
};

#endif 