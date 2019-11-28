#ifndef LOG_H
#define LOG_H

#include "Nodo.h"
#include <iostream>

using namespace std;

class Log{
	Nodo* guia;

  public:
  	Log();
  	~Log();
  	void insereAntesPrimeiro(int refri, float valor);
  	void insereAposUltimo(int refri, float valor);
  	int LerPrimeiroRefri();
	int LerPrimeiroValor();
	void removePrimeiro();
	void relatorioCompras();
};
#endif
