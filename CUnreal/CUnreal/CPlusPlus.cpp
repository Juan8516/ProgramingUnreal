#include <iostream>
using namespace std;

int main() {
//
	//-----1. Primer programa-----//
	//cout << "Hola Mundo" << endl;

	//-----2. Variables-----//
	//char miLetra = 'S';
	//int edad = 4;

	//cout << miLetra << endl;
	//cout << edad << endl;

	//Reasignar valores
	//miLetra = 'J';
	//edad = 39;

	//cout << miLetra << endl;
	//cout << edad << endl;

	//-----3. Condicional if-----//
	//int num1 = 7;
	//int num2 = 7;

	//if (num1 == num2) {
	//	cout << "Los numeros son iguales" << endl;
	//}

	//cout << "Programa Terminado" << endl;

	//-----3. Condicional if else-----//
	//int num1 = 7;
	//int num2 = 4;

	//if (num1 == num2) 
	//{
	//	cout << "Los numeros son iguales" << endl;
	//}
	//else
	//{
	//	cout << "Los numeros no son iguales" << endl;
	//}
	 
	//-----4. Condicional Elseif-----//
	int a = 98;
	int b = 42;

	if (a == b) 
	{
		cout << "Los numeros son iguales" << endl;
	}
	else if (a < b)
	{
		cout << "Los numeros son distintos" << endl;
	}
	else
	{
		cout << "a es mayor que b" << endl;
	}

	cout << "Programa Terminado" << endl;
 
	system("Pause");
}