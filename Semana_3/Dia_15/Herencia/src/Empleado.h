#include <iostream>
#include "Persona.h"
using namespace std;

class Empleado : public Persona {
private:
	string _Rfc;
	string _Ocupacion;
	float _Sueldo;
public:	
	void SetRfc(string rfc);
	string GetRfc();
	void SetOcupacion(string ocupacion);
	string GetOcupacion();
	void SetSueldo(float sueldo);
	float GetSueldo();
	string GetNombreCompleto();
};