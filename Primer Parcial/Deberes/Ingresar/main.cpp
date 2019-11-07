#include <iostream>
#include"ingresar.h"

using namespace std;

int main()
{
    Ingreso leer;
    int entero;
    float flotante;
    float mult;
    entero = leer.ingresarEntero("Ingrese un numero entero: ");
    flotante = leer.ingresarFlotante("Ingrese un numero flotante: ");
    cout<<endl;
    mult = entero*flotante;
    cout<<mult<<endl;

    system("pause");
    return 0;
}
