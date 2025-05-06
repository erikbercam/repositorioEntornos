#include <iostream>
using namespace std;
int a, b, suma, resta, multi, divid;
void pedirDatos() {
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
}
void sumar() {
	suma = a + b;
}
void restar() {
	resta = a - b;
}

void multiplicar() {
	multi = a * b;
}

void division() {
	divid = a / b;
}
void mostrarResultado() {
	cout << "La suma es: " << suma;
	cout << "La resta es: " << resta;
	cout << "La multiplicacion es: " << multi;
	cout << "La division es: " << divid << endl;
}

int main()
{
	pedirDatos();
	sumar();
	restar();
	multiplicar();
	division();

	mostrarResultado();
	system("pause");
	return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
