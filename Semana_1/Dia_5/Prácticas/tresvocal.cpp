#include <iostream>
using namespace std;
/* El siguiente programa es para contar las palabras que tienen 3 vocales */
int contarpalabrascon3omasvocales(char frase[50]);

 int main()
{
	char frase[50];
	int numpalabras = 0;

	cout<<"Programa que cuenta palabras de 3 vocales"<<endl;
	cin.getline(frase,50);

	numpalabras=contarpalabrascon3omasvocales(frase);

	cout<<"el numero de palabras con tres vocales o mas es "<<numpalabras<<endl;




	return 0;
}

int contarpalabrascon3omasvocales( char frase[50])
{

	int contarVocal= 0;
	int contarPalabra= 0; 
	int i=0;

	while (frase[i] != '\0')
	{

		while(frase[i]!=32 && frase[i]!='\0')
		{

		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i'|| frase[i] == 'o' || frase[i] == 'u')
		{ 

			contarVocal++;
		}

		i++;
		}
		if(contarVocal>=3)
		{

			contarPalabra++;
		} 
		contarVocal=0;
		if (frase[i]!='\0')
		{
			i++;
		}

	}
	return contarPalabra;
}