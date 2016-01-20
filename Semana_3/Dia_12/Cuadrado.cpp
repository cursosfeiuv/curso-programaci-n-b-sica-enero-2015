#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
	lado = 40;
}

int Cuadrado::Area()
{
	return lado*lado;
}

int Cuadrado::Perimetro()
{
	return lado*4;
}
