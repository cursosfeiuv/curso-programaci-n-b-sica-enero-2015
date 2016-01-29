#include "String.h"


void String::SetCadena(string cadena)
{
	for (int i = 0; i < 20; ++i)
	{
		_Cadena[i] = cadena[i];
	}
}

char * String::GetCadena()
{
	return _Cadena;
}