
#include <iostream>

using namespace std;


class Nodo {

    float valor_refri;
    int refrigerante;
    Nodo* prox;

  public:
         
    Nodo(int tipo, float valor, Nodo* prox);
    ~Nodo();
    Nodo* getProx();
    void setProx(Nodo* proximo);
    int getRefri();
    float getValorrefri();
};

