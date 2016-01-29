#include "Producto.h"

void Producto::SetNombreProducto(string nombre)
{
	NombreProducto = nombre;
}
void Producto::SetPrecioProducto(float precio)
{
	PrecioProducto = precio;
}
void Producto::SetMarcaProducto(string marca)
{
	MarcaProducto = marca;
}
void Producto::SetClaseProducto(string clase)
{
	ClaseProducto = clase;
}
string Producto::GetNombreProducto()
{
	return NombreProducto;
}
float Producto::GetPrecioProducto()
{
	return PrecioProducto;
}
string Producto::GetMarcaProducto()
{
	return  MarcaProducto;
}
string Producto::GetClaseProducto() {
	return ClaseProducto;
}