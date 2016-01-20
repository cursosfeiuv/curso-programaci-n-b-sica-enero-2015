/*Explicación parametros en main*/
/*
Son parametros propios de la función main.
Sirven para enviar parametros cuando ejecuto
mi programa.
	g++ Reloj.cpp -o Reloj
	Reloj.exe 12

	-El numero de parametros que envio-
	int argc = 1

	-Arreglo de los parametros que envio-
	char const *argv[] => [12]
*/

/*
Tipos de metodos:
	Getter And Setter
	Getter: Realizan una solicitud de un valor a una7
	variable.
	Setter: Colocar un valor a una variable.
*/

#include <iostream>
#include "Reloj.h"
#include "Cuadrado.h"

using namespace std;


int main()
{
	Reloj r;
	Cuadrado c;

	r.Encender();
	r.Apagar();

	cout << r.GetEncendido() << endl;
	cout << "El area del cuadrado es: " << c.Perimetro() << endl;
	return 0;
}