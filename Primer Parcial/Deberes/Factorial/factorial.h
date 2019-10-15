/*
Universidad de las Fuerzas Armadas ESPE
Nombre: Elian Llorente
NRC:2967
Fecha de Creacion: 23/09/2019
Fecha de Modificacion: 15/10/2019

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Dato{
	private:
	int valor;
	public:
	Dato();
	Dato(int);
	void setValor(int);
	int getValor();
	void toString();
	int procesoF(int);

};

Dato::Dato(){
	setValor(0);
}

Dato::Dato(int valorNuevo){
	setValor(valorNuevo);
}

void Dato::setValor(int valorNuevo){
	valor = valorNuevo;
}

int Dato::getValor(){
	return valor;
}

void Dato::toString(){
	cout<<"Valor:"<<valor<<endl;
}

int Dato::procesoF(int fact){

	if(fact == 1){
		return 1;
	}
	else{
		return fact*procesoF(fact-1);
	}
}


