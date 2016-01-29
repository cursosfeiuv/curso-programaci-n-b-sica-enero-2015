#include <iostream>
#include "Empleado.h"
#include "Producto.h"
using namespace std;

bool BuscarProducto(Producto p[], string nombre, int n);

int main(int argc, char const *argv[])
{
	/*Carga de Empleados*/
	Empleado p[10];
	Producto l[3];
	int i ;
	cin>> i;
	for (int k = 0; k < i; ++k)
	{
		Empleado tmp;
		string nombre;
		cin >> nombre;
		tmp.SetNombre(nombre);
		string rfc;
		cin >> rfc;
		tmp.SetRfc(rfc);
		string ocupacion;
		cin >> ocupacion;
		tmp.SetOcupacion(ocupacion);
		float sueldo;
		cin >> sueldo;
		tmp.SetSueldo(sueldo);
		p[k] = tmp;
	}
	/*Carga de Productos*/
	cin>>i;
	for (int k = 0; k < i; ++k)
	{
		Producto tmp;
		string nombre;
		cin >> nombre;
		tmp.SetNombreProducto(nombre);
		float precio;
		cin >> precio;
		cout << "Numero"<< endl;
		tmp.SetPrecioProducto(precio);		
		l[k] = tmp;
	}


	bool b = true;

	do
	{
		cout << "Buscar Producto: " << endl;
		string nom;
		cin.ignore();cin.ignore();cin.ignore();
		cin >> nom;
		if(BuscarProducto(l, nom, i))
		{
			cout << "Si existe" << endl;
			b=false;
		}
	}while(b);

	return 0;
}

bool BuscarProducto(Producto p[], string nombre, int n)
{
	bool b = false;
	for (int i = 0; i < n; ++i)
	{
		if(true)
		{
			b = true;
			break;
		}
	}
	return b;
}