#include "Empleado.h"

void Empleado::SetRfc(string rfc) {
	_Rfc = rfc;
}
string Empleado::GetRfc() {
	return _Rfc;
}

void Empleado::SetOcupacion(string ocupacion) {
	_Ocupacion = ocupacion;

}
string Empleado::GetOcupacion() {
	return _Ocupacion;
}
void Empleado::SetSueldo(float sueldo) {
	_Sueldo = sueldo;
}
float Empleado::GetSueldo() {
	return _Sueldo;
}

/*Accede al miembro de Clase Base que es Persona*/
string Empleado::GetNombreCompleto()
{
	return _Nombre;
}