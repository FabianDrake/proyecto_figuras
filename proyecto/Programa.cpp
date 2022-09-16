#include "Programa.h"

int Programa::return_tama�o() {
	int size;
	cout << "Ingrese el tama�o de la figura: ";
	cin >> size;
	cout << endl;
	return size;
}

void Programa::run() {
	int opc;

	Shape* cuadrado;
	Shape* triangulo;
	Shape* rombo;

	do {
		cout << "Que figura desea dibujar?\n";
		cout << "\n";
		cout << "1. Cuadrado \n";
		cout << "2. Rombo \n";
		cout << "3. Triangulo \n";
		cout << "4. Salir\n";
		cout << "\n";
		cout << "Digite su opcion: ";
		cin >> opc;
		cout << "\n";

		// En cada una de las opciones hacemos que pregunten el tama�o, para despues invocar el draw() de cada figura
		switch (opc) {
		case 1:
			
			cuadrado = new Square(return_tama�o());
			cuadrado->draw();
			break;

		case 2:
			
			rombo = new Rhombus(return_tama�o());
			rombo->draw();
			break;

		case 3:
			
			triangulo = new Triangle(return_tama�o());
			triangulo->draw();
			break;

		case 4:
			break;

		default:
			cout << endl;
			cout << "No existe ese numero de opcion";
			break;
		}

		} while (opc != 4);
	}