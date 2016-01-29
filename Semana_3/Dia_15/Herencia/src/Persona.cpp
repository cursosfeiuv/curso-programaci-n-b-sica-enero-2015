#include "Persona.h"

void Persona::SetEdad(int edad)
{
	_Edad = edad;
}
void Persona::SetNombre(string nombre)
{
	_Nombre = nombre;
}
int Persona::GetEdad()
{
	return _Edad;
}
string Persona::GetNombre()
{
	return _Nombre;
}