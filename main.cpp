
#include "List.cpp"

int main(){

  Log log;
  int refri=0;
  float valor=0;
    

do{
            
	    cout << "Caso 0"<< endl;					
	    cout << "Caso 1 inserir"<< endl;
	    cout << "caso 2" << endl;
	    cout << "caso 3"<< endl;
	    
            cin >> option;

		switch(option){
    		  case 0:
    		  	   return 0;
    	           break;
    		  case 1:
                    log.insereAposUltimo();
                    break;
    		  case 2:
		    log..();
		    break;
		  case 3: 
		    cout<< "qual o valor a ser inserido ?"<<endl;
		    cin>> valor;
                    lista.insertAfterLast(valor);
		    break;
		 default:
			cout<<"ERRO, TENTE NOVAMENTE"<<endl;
            }

}
while(true);
}
