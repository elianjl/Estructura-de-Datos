/*
Universidad de las Fuerzas Armadas ESPE
Nombre: Elian Llorente
NRC: 2967
Fecha de Creacion: 23/09/2019
Fecha de Modificacion: 15/10/2019


*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

using namespace std;

class SenCos{
	private:
		int nTermino;
		float angulo;

	public:
		SenCos();
		int factorial(int);
		float funcionSen(int, float);
		float funcionCos(int, float);
		float funcionTan(int,float);
};

int factorial(int nFact){

	int fact = 1;
	for(int i=1; i<=nFact; i++){
		fact = fact*i;
	}
	return fact;
}

float funcionSen(int nTermino, float angulo){
	float seno = 0.0;
	for(int i=0; i<nTermino; i++){
		seno = seno+pow(-1,i)*pow(angulo,2*i+1)/factorial(2*i+1);
	}
	return seno;
}

float funcionCos(int nTermino, float angulo){
	float coseno = 0.0;
	for(int i=0; i<nTermino; i++){
		coseno = coseno+pow(-1,i)*pow(angulo,2*i)/factorial(2*i);
	}
	return coseno;
}

float funcionTan(int nTermino, float angulo){
	float tan = 0.0;
	float sen = 0.0;
	float cos = 0.0;
	sen = funcionSen(nTermino,angulo);
	cos = funcionCos(nTermino,angulo);
	tan = sen/cos;
	return tan;
}



