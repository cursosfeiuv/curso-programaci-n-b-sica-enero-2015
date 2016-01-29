#include <iostream>
using namespace std;

class Producto
{
private:
	string NombreProducto;
	float PrecioProducto;
	string MarcaProducto;
	string ClaseProducto;
public:
	void SetNombreProducto(string nombre);
	void SetPrecioProducto(float precio);
	void SetMarcaProducto(string marca);
	void SetClaseProducto(string clase);
	string GetNombreProducto();
	float GetPrecioProducto();
	string GetMarcaProducto();
	string GetClaseProducto();
};