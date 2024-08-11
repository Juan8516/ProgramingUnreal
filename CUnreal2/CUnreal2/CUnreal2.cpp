#include <iostream>
using namespace std;

////1. Ambito Variables
////Variable Global
//int num2 = 16;
//
//int main() {
//	//Ambito Local
//	{
//		int num1 = 4;
//		cout << num1 << endl;
//	}
//		cout << num2 << endl;
//
//	system("pause");
//
//}

//2.Funciones
//int sumaEnteros(int num1, int num2) {
//	return num1 + num2;
//}
//
//void imprimirNumeros(int num) {
//	cout << num << endl;
//}
//
//int main() {
//	int a = 1;
//	int b = 5;
//
//	int suma = sumaEnteros(a, b);
//
//	imprimirNumeros(suma);
//
//	system("pause");
//}

void imprimirNumeros(float num) {
	cout << num << endl;
}

//2.Ciclo While
int main() {

	float num1 = 0.00f;
	float num2 = 1.00f;

	while (num2 >= num1)
	{
		num1 += 0.01f;
		imprimirNumeros(num1);
	}
}
