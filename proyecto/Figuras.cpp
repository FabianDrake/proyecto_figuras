#include "Figuras.h"
#include <iostream>

using namespace std;

Shape::Shape(int tamaño) {
	this->tamaño = tamaño;
}

Square::Square(int tamaño) : Shape(tamaño) {}
Triangle::Triangle(int tamaño) : Shape(tamaño) {}
Rhombus::Rhombus(int tamaño) : Shape(tamaño) {}

// Funcion virtual para que tenga polimorfismo
void Shape:: draw(){}


// Instruccion de cuadrado para draw()
void Square::draw() {

    int op;

    cout << "Desea que su cuadrado este relleno?\n";
    cout << "1- Relleno \n";
    cout << "2- Vacio \n";
    cout << "Opcion:  ";
    cout << "\n";

    cin >> op;

    if (op == 1) {

        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n";
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; j++) {
                if (i == 0 || j == 0 || (i == tamaño - 1) || (j == tamaño - 1)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
        




// Instrucciones de triangulo para draw()
void Triangle::draw() {

    for (int i = 0; i < tamaño; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}





// Instrucciones de Rombo para draw()
void Rhombus::draw(){
    for (int j = 0; j < tamaño; ++j) {
        for (int i = 0; i < tamaño - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }

    for (int j = tamaño - 2; j >= 0; --j) {
        for (int i = 0; i < tamaño - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }
}

 


// para tratar de mover el cuadrado

/* 

char opcion = 'x';
char cha, matrix[100][100];
    int y = 0;
    int x = 0;
    while (opcion != 'z') {
        system("cls");
        mover(x, y);

        //El cuadrado 
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
        //-----------------------------------------

        opcion = _getch();
        switch (opcion) {
        case 'w': y--; break;
        case 's': y++; break;
        case 'a': x--; break;
        case 'd': x++; break;
        }
    }


*/

/*
char op;

    cout << "Desea que su cuadrado este relleno?\n";
    cout << "1- Relleno \n";
    cout << "2- Vacio \n";
    cout << "Opcion:  ";
    cout << "\n";

    cin >> op;

    if (op == 1) {
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
    }else {
        cout << "\n";
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; j++) {
                if (i == 0 || j == 0 || (i == tamaño - 1) || (j == tamaño - 1)) {
                    cout << "*";
                }else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }


*/