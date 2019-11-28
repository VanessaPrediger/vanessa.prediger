
#include "Nodo.h"

// Construtor
Nodo::Nodo(int tipo, float valor, Nodo* prox){
       refrigerante = tipo;
       valor_refri = valor;
       prox	= prox;
}


float Nodo::getValorrefri(){
     return valor_refri;
}

int Nodo::getRefri(){
     return refrigerante;
}

Nodo* Nodo::getProx(){
     return prox;
}

void Nodo::setProx(Nodo* prox){
       prox = prox;
}
