#include "Reloj.h"

Reloj::Reloj()
{
	encendido = true;
	cout << "Encendido\n";
}

void Reloj::Encender()
{
	encendido = true;
	cout << "Encendido\n";
}

void Reloj::Apagar()
{
	encendido = false;
	cout << "Apagado\n";
}

bool Reloj::GetEncendido()
{
	return encendido;
}