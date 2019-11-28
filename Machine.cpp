#include "Machine.h"
#include "log.h"

Log objeto_lista;

Machine::Machine(){
	M25 = 0;
	M50 = 0;
	M100 = 0;
	sel = 0;
	total = 0;
	devolucao = false;
	refri = 0;
}

Machine::~Machine(){

}

void Machine::reset(){
	M25 = 0;
	M50 = 0;
	M100 = 0;
	sel = 0;
	total = 0;
	devolucao = false;
	refri = 0;
}


void Machine::incluiM25(){
	M25 = M25 + 1;
	cout << "M25" << M25 << endl;
}

void Machine::incluiM50(){
	M50 = M50 + 1;
}
void Machine::incluiM100(){
	M100 = M100 + 1;
}

bool Machine::trocoM25(){
	return true;
}

bool Machine::trocoM50(){
	return true;
}

bool Machine::trocoM100(){
	return true;
}
bool Machine::devolve(){
	cout << "devolvido" << endl;
	return true;	
}

int Machine::troco(int total){
	return total - 150;
}

int Machine::acumulado(){
	return 25*M25 + 50*M50 + 100*M100;
}

bool Machine::teste(int total){
	int result = total;
	if(result >= 150){
		return true;
	}
	else{
		return false;	
	}
	
}

bool Machine::setRefri(int tipo_refri){
	int escolhido = tipo_refri;

	switch(escolhido){
		case 1:
			cout << "Voce escolheu o refri MEET" << endl;
			//return true;
			objeto_lista.insereAposUltimo(1,1.50);
			break;

		case 2:
			cout << "ETIRPS" << endl;
			//return true;
			objeto_lista.insereAposUltimo(2,1.50);
			break;

		default :
			cout << "Marca nao definida";
			//return false;
			break;
	}

	return true;
}
