#include <iostream>
#include "String.h"
using namespace std;

int main(int argc, char const *argv[])
{
	String s;
	s.SetCadena("Hola a todos!");

	cout << s.GetCadena() << endl;


	cout << (char) 48 << endl;
	cout << ('A'-'0') << endl;
	return 0;
}