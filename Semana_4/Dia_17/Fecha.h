#include <iostream>
#include <stdlib.h>/*Para que pueda ser utilizado "Atoi"*/

using namespace std;

class Fecha{

private:
	int _Dia;
	int _Mes;
	int _Anio;

public:
	void ObtenFecha(string fechaS);
	void SetDia(int dd);
	int GetDia();
	void SetMes(int mm);
	int GetMes();
	void SetAnio(int aaaa);
	int GetAnio();
	bool AnioValido(int anio);
	bool AnioBisiesto(int anio);
	bool MesValido(int mes);
	bool DiaValido(int dia, int mes);
	bool FechaValida();
};