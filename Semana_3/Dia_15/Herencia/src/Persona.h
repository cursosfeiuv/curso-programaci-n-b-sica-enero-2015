#include <iostream>
using namespace std;

class Persona
{
private:
	int _Edad;
protected:
	string _Nombre;
public:
	void SetEdad(int edad);
	void SetNombre(string nombre);
	int GetEdad();
	string GetNombre();
};