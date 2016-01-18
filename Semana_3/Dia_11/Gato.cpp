#include <iostream>

using namespace std;

void gato(char a[][3], int marcador[]);
void limpiarPantalla();
void tirar(char a[][3], char posicion, char tiro);
bool validar(char a[][3], char op);

int main()
{
	char a[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	char tiro;
	char posicion;
	int marcador[2] = {0, 0};
	int opcion = 0;

	do
	{
		cout << "¿Qué jugador eres (1 - 2)?" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			limpiarPantalla();
			gato(a, marcador);
			cout << "¿Qué deseas tirar (X-O)?" << endl;
			cin >> tiro;
			cout << "¿En qué lugar (1-9)?" << endl;
			cin >> posicion;
			tirar(a, posicion, tiro);
			limpiarPantalla();
			if(validar(a, tiro))
			{
				int tmp = marcador[0];
				tmp++;
				marcador[0] = tmp;
			}
			gato(a, marcador);			
			break;
		case 2:
			limpiarPantalla();
			gato(a, marcador);
			cout << "¿Qué deseas tirar (X-O)?" << endl;
			cin >> tiro;
			cout << "¿En qué lugar (1-9)?" << endl;
			cin >> posicion;
			tirar(a, posicion, tiro);
			limpiarPantalla();			
			if(validar(a, tiro))
			{
				int tmp = marcador[1];
				tmp++;
				marcador[1] = tmp;
			}
			gato(a, marcador);			
			break;

		default:
			cout << "opción no valida" << endl;
			break;
		}

	} while (opcion != 0);

	return 0;
}

void gato(char a[][3], int marcador[])
{
	cout << "\t" << "Jugador 1: " << marcador[0] << "\t" << "Jugador 2: " << marcador[1] << endl << endl;
	cout << "\t\t" << " " << a[0][0] << " " << "|" << " " << a[0][1] << " " << "|" << " " << a[0][2] << " " << endl;
	cout << "\t\t" << "___" << "|" << "___" << "|" << "___" << endl;
	cout << "\t\t" << " " << a[1][0] << " " << "|" << " " << a[1][1] << " " << "|" << " " << a[1][2] << " " << endl;
	cout << "\t\t" << "___" << "|" << "___" << "|" << "___" << endl;
	cout << "\t\t" << "   " << "|" << "   " << "|" << "   " << endl;
	cout << "\t\t" << " " << a[2][0] << " " << "|" << " " << a[2][1] << " " << "|" << " " << a[2][2] << " " << endl;
	cout << endl;
}

void limpiarPantalla()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "\n\n\n\n\n\n\n\n";
	}
}

void tirar(char a[][3], char posicion, char tiro)
{
	for (int j = 0; j < 3; ++j)
	{
		for (int i = 0; i < 3; ++i)
		{
			if (a[j][i] == posicion)
			{
				a[j][i] = tiro;
			}
		}
	}
}

bool validar(char a[][3], char op)
{
	/*Valida Horizontales*/
	if (a[0][0] == op && a[0][1] == op && a[0][2] == op)
	{
		return true;
	} else
	{
		if (a[1][0] == op && a[1][1] == op && a[1][2] == op)
		{
			return true;
		}
		else
		{
			if (a[2][0] == op && a[2][1] == op && a[2][2] == op)
			{
				return true;
			}
			else
			{
				/*Validaciones Verticales*/
				if (a[0][0] == op && a[1][0] == op && a[2][0] == op)
				{
					return true;
				}
				else
				{
					if (a[0][1] == op && a[1][1] == op && a[2][1] == op)
					{
						return true;
					}
					else
					{
						if (a[0][2] == op && a[1][2] == op && a[2][2] == op)
						{
							return true;
						}
						else
						{
							/*Validaciones cruzadas*/
							if (a[0][0] == op && a[1][1] == op && a[2][2] == op)
							{
								return true;
							}
							else
							{
								if (a[2][0] == op && a[1][1] == op && a[0][2] == op)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}

	}
	return false;
}