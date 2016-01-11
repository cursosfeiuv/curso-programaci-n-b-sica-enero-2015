#include <iostream>
using namespace std;

/*Area de declaración de funciones*/
void leerDatos(float *, float *, int *, int *); /*No es necesario poner los nombres basta con los tipos*/
void calcularDatos(float, float, int, int);
void limpiarPantalla();

int main() //Inicia en mi diagrama de flujo (Punto de entrada)
{
	/*Comienza con las lecturas (Entradas)*/	
	float m_fCosto, m_fValorRescate; //Almacenan $
	int m_iVidaUtil, m_iAnio; //Solo calcula años completos.

	/*Lee los datos de entrada del usuario*/
	leerDatos(&m_fCosto, &m_fValorRescate, &m_iVidaUtil, &m_iAnio); /*Se mandan las referencias*/	

	limpiarPantalla();	
	
	/*Calcula los datos de la tabla*/
	calcularDatos(m_fCosto, m_fValorRescate, m_iVidaUtil, m_iAnio);	
	

	return 0;
}

/*
* name: limpiarPantalla
* Author: Alfonso
* return: nada
*/
void limpiarPantalla()
{
	for (int n = 0; n < 2; n++)
  		cout << "\n\n\n\n\n\n\n\n\n\n";
}

/*
* name: leerDatos
* Author: Alfonso
* return: nada
*/
void leerDatos(float * io_fCosto, float * io_fValorRescate, int * io_iVidaUtil, int * io_iAnio)
/*Se usan apuntadores puesto que tengo que almacenar los datos en las referencias (&)*/
{
	cout << "Teclee los datos:" << endl;
	cout << "Costo del Vehículo: ";
	cin >> *io_fCosto; /*Siempre que lea tengo que desreferenciar*/
	cout << endl << "Valor de rescate del Vehículo: ";
	cin >> *io_fValorRescate; /*Siempre que lea tengo que desreferenciar*/
	cout << endl << "Vida útil del Vehículo: ";
	cin >> *io_iVidaUtil; /*Siempre que lea tengo que desreferenciar*/
	cout << endl << "Año Actual: ";
	cin >> *io_iAnio; /*Siempre que lea tengo que desreferenciar*/

	cout << endl<< "Calculando...." << endl;
}

/*
* name: calcularDatos
* Author: Alfonso
* return: nada
*/
void calcularDatos(float i_fCosto, float i_fValorRescate, int i_iVidaUtil, int i_iAnio)
/*Se usan apuntadores puesto que tengo que almacenar los datos en las referencias (&)*/
{
	/*Preparo mis datos para generar la salida por el metodo a usar*/
	float m_fValorActual = i_fCosto;
	float m_fDepreciacion = (i_fCosto - i_fValorRescate)/i_iVidaUtil;
	float m_fAcumulada = 0;

	cout << "\tDatos: ";
	cout << "\tAño actual: " << i_iAnio;
	cout << "\tCosto: " << i_fCosto;
	cout << "\tVida útil: " << i_iVidaUtil;
	cout << "\tValor de rescate: " << i_fValorRescate << endl  << endl << endl;
	
	cout << "\t Año \t" << "\t\tDepreciación\t" << "\tDepreciación Acumulada\t" << "\tValor Actual\t" << endl;

	for (int i = 0; i < i_iVidaUtil; ++i)
	{		
		m_fAcumulada = m_fAcumulada + m_fDepreciacion;
		m_fValorActual = m_fValorActual - m_fDepreciacion;
		i_iAnio++;
		cout << "\t " <<  i_iAnio << " \t" << "\t\t " << m_fDepreciacion << " \t" << "\t\t\t " << m_fAcumulada << " \t" << "\t\t " << m_fValorActual << " \t" << endl;
	}
}