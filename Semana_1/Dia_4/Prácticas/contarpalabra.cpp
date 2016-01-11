#include <iostream>
using namespace std;
/* El siguiente programa es paraa calcular el numero de programas  que contiene un texto   */

int contarpalabras(char frase[]);

int main () 
{
	
	int numpalabras=0;
	char frase[50];

	cout<< "PROGRAMA QUE CUENTA LAS PALABRAS"<<endl;
	cout<<"introduce una frase:";
	cin.getline(frase,50);

	numpalabras=contarpalabras(frase);

	cout<<"el numero de palabras es: "<<numpalabras;
	return 0;

}

int contarpalabras(char frase[])
{

	int nPalabras=1;
	int i=0;

	while(frase[i] != '\0' )
	{
		if(frase[i]==32)
		{

			nPalabras++;
		}
	i++;

	}

return nPalabras; 

}



