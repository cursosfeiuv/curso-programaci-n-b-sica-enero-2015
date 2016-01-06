
#include <iostream>

using namespace std;


int main ()
{

	cout << "El tamaño de un entero es: " << sizeof(int) << endl;
	cout << "El tamaño de un short es: " << sizeof(short) << endl;
	cout << "El tamaño de un long es: " << sizeof(long) << endl;
	cout << "El tamaño de un char es: " << sizeof(char) << endl;
	cout << "El tamaño de un float es: " << sizeof(float) << endl;
	cout << "El tamaño de un double es: " << sizeof(double) << endl;
	cout << "El tamaño de un boleano es: " << sizeof(bool) << endl;

	int arreglo[10];
	cout << "El tamaño de un entero es: " << sizeof(arreglo)/sizeof(int) << endl;

	return 0;
}