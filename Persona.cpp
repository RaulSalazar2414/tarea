#include<iostream>

using namespace std;

class Persona{

	protected : string nombres,apellidos;
				int telef;	
	protected :
		Persona(string nomb,string apelli,int tel){
			nombres=nomb;
			apellidos=apelli;
			telef=tel;	
		}
		
		void agregar();
		void mostrar();
};


