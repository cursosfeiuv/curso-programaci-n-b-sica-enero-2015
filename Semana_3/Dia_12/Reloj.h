#include <iostream>

using namespace std;

class Reloj
{
private:
	bool encendido;

public:
	Reloj();
	void Encender();//{cout << "Encendido";}
	void Apagar();//{cout << "Apagado";}
	bool GetEncendido();
};