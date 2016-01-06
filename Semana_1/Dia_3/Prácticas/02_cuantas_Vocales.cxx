









/*
* La maestra de primaria de Pedro le ha encargado que cuente
* cuantas vocales tiene el ensayo que le ha encargado.
* Ayuda a Pedro a contar las vocales de su ensayo diseñando 
* un algoritmo (funcion) que cuente cuantas vocales existentes en su 
* texto. El texto será leido de la consola.
*/

/*
* @By Alfonso
*/
#include <iostream>
using namespace std;

/*Declarando funciones a usar*/
int contarVocales(char cadena[], int n);

int main()
{
	cout << "Hola! Yo soy un programa que cuenta las vocales." << '\n' <<
			"A continuación teclea una oración:\n";
	char cadena[50];
	cin.getline(cadena, 50);
	
	cout <<"\nLa oración es: " << cadena << endl;

	cout << "la cúal tiene " << contarVocales(cadena, 50) << " vocales." << endl;
	return 0;
}



int contarVocales(char cadena[], int n)
{
	int iVocales = 0;
	int i = 0;
	while(cadena[i] != '\0')
	{
		if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i'
			|| cadena[i] == 'o' || cadena[i] == 'u')
		{
			iVocales++;
		}
		i++;
	}
	return iVocales; 
}