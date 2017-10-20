#include <iostream>
using namespace std;

int menu();
int ejercicio1(int);


int main(){
	bool resp = true;
	while(resp){
		switch(menu()){
			case 1:{
				int num;
				cout<<"Ingrese un numero "<<endl;
				cin>>num;
				cout<<ejercicio1(num)<<endl;   
				 break;
				   }
			case 2:{

				  
				 break; 
				   }

			case 3:{
					


				 break;

				   }

			case 4:{
				resp=false;
				break;
				   }
		}
	}
	return 0;
}

int menu(){
	cout<<"        MENU"<<endl<<"Ingrese una opcion"<<endl<<"1- Ejercicio 1 (Numeros Primos)"<<endl<<"2- Ejercicio 2 (Multiplos)"<<endl<<"3- Ejercicio 3 (Conjetura Goldbach)"<<endl<<"4- Salir";
	int opc;
	cin>>opc;
	return opc;
}

bool primeNum(int num){

	bool prime = false;
	int contador=0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			contador++;
		}
	}

	if(contador==2){
		prime=true;	
	}else{
		prime=false;
	}

	return prime;
}

int ejercicio1(int numero){
	int primos=0;
	for(int i=1;i<=numero;i++){
		if(primeNum(i)== true){
			primos+=i;
		}
	}

	return primos;
}



