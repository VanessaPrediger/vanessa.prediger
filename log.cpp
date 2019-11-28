#include "log.h"

//refrigerante = 1 MEET
//refrigerante = 2 ETIRPS

Log::Log(){
	   guia = 0;
}

Log::~Log(){
Nodo* aux = guia;
  while(guia) {
    aux = aux->getProx();
    delete guia;
    guia = aux;
  }
  guia = 0; 
}


void Log::insereAntesPrimeiro(int refri, float valor) {
    guia= new Nodo(refri, valor, guia);
}

void Log::insereAposUltimo(int refri, float valor) {
  Nodo* p = guia;
  Nodo* q = guia;

  if (guia == 0)
     guia = new Nodo(refri, valor, guia);
  else {
     while (q != 0) {
        p = q;
        q = p->getProx();
     }
     p->setProx(new Nodo(refri, valor,0));
  }
}

int Log::LerPrimeiroRefri() {
    if(guia == 0)
        return -1;
    else
        return guia->getRefri(); 
}

int Log::LerPrimeiroValor() {
    if(guia == 0)
        return -1;
    else
        return guia->getValorrefri(); 
}

void Log::removePrimeiro() {
  if (guia != 0){
     Nodo* antigoguia = guia;
     guia = guia->getProx();
     delete antigoguia;
  }
}

   
void Log::relatorioCompras() {
	Nodo* temporario = guia;
	Nodo* temporario_deleta = guia; 
	int i = 0;
	float valor_meet = 0;
	float valor_etirps = 0; 
	float valor_total = 0;
	int quant_meet = 0; 
	int quant_etirps = 0; 
	int quant_total = 0; 


// aqui realiza a leitura do tipo de refrigerante e o seu valor, 
// onde tambem realiza a soma um a um ate o final da fila obtendo 
// o valor total de refrigerantes vendidos como o valor na maquina
    while (temporario != 0){
        i++;        
        if(temporario->getRefri() == 1){
            cout <<"Refrigerante tipo MEET" << endl;
            quant_meet++;
            cout <<"Valor da unidade: " << temporario->getValorrefri() << endl;
            valor_meet += temporario->getValorrefri();

        }

        if(temporario->getRefri() == 2){ 
            cout <<"Refrigerante tipo ETIRPS" << endl;
            quant_etirps++;
            cout <<"Valor da unidade: " << temporario->getValorrefri() << endl;
            valor_etirps += temporario->getValorrefri();
        }
        
        
        temporario = temporario->getProx();
    }
    

    quant_total = quant_meet + quant_etirps;
    valor_total = valor_etirps + valor_meet;

// aqui apresenta ao operador os dados da maquina
    cout << " \n Quantidade de refrigerantes comprados tipo MEET: " << quant_meet << endl;
    cout << " \n Valor acumulado obtido pela compra do tipo MEET: R$ " << valor_meet << endl;
    cout << " \n Quantidade de refrigerantes comprados tipo ETIRPS: " << quant_etirps << endl;
	cout << " \n Valor acumulado obtido pela compra do tipo ETIRPS: R$ " << valor_etirps << endl;
	cout << " \n Quantidade total de compras de refrigerantes: " << quant_total << endl;
	cout << " \n Valor acumulado com todas as compras: R$ " << valor_total << endl;
	cout << "\n" << endl;

    while(temporario_deleta != 0){
        removePrimeiro();
    }
}
