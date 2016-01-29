#include <iostream>
#include "Fecha.h"

using namespace std;

int main(){
	Fecha f;
	string fec;

	cout << "Introduce fecha (dd/mm/aaaa): ";
	cin >> fec;

	f.ObtenFecha(fec);

	cout << "El día es: " << f.GetDia() << endl;
	cout << "El mes es: " << f.GetMes() << endl;
	cout << "El año es: " << f.GetAnio() << endl;

	/*f.AnioValido(f.GetAnio());
	f.AnioBisiesto(f.GetAnio());
	f.MesValido(f.GetMes());
	f.DiaValido(f.GetDia(), f.GetMes());*/

	if (f.FechaValida())
	{
		cout << "Fecha Válida"<< endl;
	}

	return 0;
}