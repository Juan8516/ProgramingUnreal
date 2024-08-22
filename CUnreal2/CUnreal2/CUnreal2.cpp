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

//void imprimirNumeros(float num) {
//	cout << num << endl;
//}
//
////2.Ciclo While
//int main() {
//
//	float num1 = 0.00f;
//	float num2 = 1.00f;
//
//	while (num2 >= num1)
//	{
//		num1 += 0.01f;
//		imprimirNumeros(num1);
//	}
//}


//3.Practica

//Variables
int main() {

	//Ingreso valores por consola.
    int choice;
    bool keepRunning = true;

    while (keepRunning) {
        int num1, num2;
        std::cout << "Ingrese el primer n�mero: ";
        std::cin >> num1;

        std::cout << "Ingrese el segundo n�mero: ";
        std::cin >> num2;

        std::cout << "\nSeleccione una operaci�n:\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Resta\n";
        std::cout << "3. Multiplicaci�n\n";
        std::cout << "4. Divisi�n\n";
        std::cout << "5. Salir\n";
        std::cout << "Opci�n: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Resultado de la suma: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Resultado de la resta: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Resultado de la multiplicaci�n: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "Resultado de la divisi�n: " << num1 / num2 << std::endl;
            }
            else {
                std::cout << "Error: Divisi�n por cero no permitida." << std::endl;
            }
            break;
        case 5:
            keepRunning = false;
            break;
        default:
            std::cout << "Opci�n no v�lida. Int�ntalo de nuevo." << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << "Gracias por usar el programa. �Adi�s!" << std::endl;

    return 0;
}
