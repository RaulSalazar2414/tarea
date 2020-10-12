#include "Persona.cpp"
#include<iostream>

using namespace std;
class Estudiante:Persona{
	private : string carrera,carnet,seccion;
	public: 
		Estudiante(string carn,string nom,string ape,string carre,string secc,int tel):Persona(nom,ape,tel){
			carnet=carn;
			carrera=carre;
			seccion=secc;
		}
	
	void setCarnet(string carn){carnet=carn;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setCarrera (string carre){carrera=carre;}
	void setSeccion(string secc){seccion=secc;}
	void setTelefono(int tel){telef=tel;}	 
	 
	 	string getCarnet(){return carnet;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	string getCarrera(){return carrera;}
		string getSeccion(){return seccion;}	 	
	 	int getTelefono(){return telef;}	
	
		void mostrar(){
cout<<"__________________________________________"<<endl;
cout<<carnet<<","<<nombres<<", "<<apellidos<<", "<<carrera<<","<<seccion<<","<<telef<<endl;
}
};


