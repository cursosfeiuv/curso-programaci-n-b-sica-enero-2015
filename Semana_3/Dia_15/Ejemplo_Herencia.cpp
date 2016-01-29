#include <iostream>
using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{

protected:
	int _Edad;
	int _Peso;

public:
	int GetEdad()
	{
		return _Edad;
	}

	int GetPeso()
	{
		return _Peso;
	}

	void SetEdad(int edad)
	{
		_Edad = edad;
	}

	void SetPeso(int peso)
	{
		_Peso = peso;
	}

	void Hablar()
	{
		cout << "Sonido" << endl;
	}
	
};

class Perro : public Mamifero
{
protected:
RAZA _Raza;

public:
	RAZA GetRaza()
	{
		return _Raza;
	}
	void SetRaza(RAZA raza)
	{
		_Raza = raza;
	}
	
};

int main(int argc, char const *argv[])
{
	Perro fido;
	fido.Hablar();	
	return 0;
}