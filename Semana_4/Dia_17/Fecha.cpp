//Metodos de la clase Fecha...

#include "Fecha.h"
#include <stdlib.h>

void Fecha::ObtenFecha(string fechaS){
	 string dd, mm, aaaa;
	int d, m, a;

	dd+=fechaS[0];
	dd+=fechaS[1];

	mm+=fechaS[3];
	mm+=fechaS[4];

	aaaa+=fechaS[6];
	aaaa+=fechaS[7];
	aaaa+=fechaS[8];
	aaaa+=fechaS[9];

	d = atoi(dd.c_str());
	m = atoi(mm.c_str());
	a = atoi(aaaa.c_str());

	SetDia(d);
	SetMes(m);
	SetAnio(a);
}



void Fecha::SetDia(int dd){
		_Dia = dd;
}

int Fecha::GetDia(){
	return _Dia;
}

void Fecha::SetMes(int mm){
	_Mes = mm;
}

int Fecha::GetMes(){
	return _Mes;
}

void Fecha::SetAnio(int aaaa){
	_Anio = aaaa;
}

int Fecha::GetAnio(){
	return _Anio;
}

bool Fecha::AnioValido(int anio){
	if (anio < 1896 || anio > 2016){
		cout << "Anio Invalido." << endl;
		return false;
	}
	else {
		cout << "Anio Valido." << endl;;
		return true;
	}
}

bool Fecha::AnioBisiesto(int anio){
	if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
		cout << "El anio " << anio << " es Bisiesto." << endl;
		return true;
	}
	else {
		cout << "El anio " << anio << " No es Bisiesto." << endl;
		return false;
	}
}

bool Fecha::MesValido(int mes){
	if ( mes > 0 && mes < 12){
		cout << "Mes Valido." << endl;
		return true;
	}
	else{
		cout << "Mes invalido" << endl;
		return false;
	}
}

bool Fecha::DiaValido(int dia, int mes){
	if (dia > 0 && dia < 32){
		if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
			cout << "Dia Valido." << endl;
			return true;
		}

		else if (mes == 2 && dia > 27 && dia < 29){
			cout << "Dia Valido." << endl;
			return true;
		}
		else if(mes != 2 && dia < 31){
			cout << "Dia Valido." << endl;
		}
		 else 
		 	cout << "Dia invalido." << endl;
		 return false;
	}	
}

bool Fecha::FechaValida()
{
	bool valido =  false;
	if (AnioValido(_Anio) && MesValido(_Mes) && 
		DiaValido(_Dia, _Mes))
	{
		valido = true;
	}

	return valido;
}